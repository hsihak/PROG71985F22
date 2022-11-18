#include "participant.h"
#include "listNode.h"
#include <stdio.h>
#include <stdlib.h>

// implementation of ListNode

// PROG71985F22 - Nov 2022 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//

PLISTNODE CreateNode(PARTICIPANT item)
{
	PLISTNODE newNode = (PLISTNODE)malloc(sizeof(LISTNODE));
	if (!newNode)
	{
		fprintf(stderr, "error allocating memory\n");
		exit(1);
	}
	newNode->nodeData = CopyParticipant(item);
	newNode->next = NULL;

	return newNode;
}

PLISTNODE GetNodeNextNode(PLISTNODE listNode)
{
	return listNode->next;
}

void SetNodeNextNode(PLISTNODE sourceListNode, PLISTNODE newNextNode)
{
	sourceListNode->next = newNextNode;
}

void DisposeNode(PLISTNODE listNode)
{
	DisposeStudent(listNode->nodeData);
	free(listNode);
}
