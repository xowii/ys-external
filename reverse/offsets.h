#pragma once
#include <Windows.h>

#define OFFSET_UWORLD 0xe11fdc8 //

namespace OFFSETS
{
    uintptr_t Gameinstance = 0x1B8; //
    uintptr_t LocalPlayers = 0x38;
    uintptr_t PlayerController = 0x30;
    uintptr_t LocalPawn = 0x330; //
    uintptr_t PlayerState = 0x2a8; //
    uintptr_t RootComponet = 0x190; //
    uintptr_t PersistentLevel = 0x30;
    uintptr_t ActorCount = 0xA0;
    uintptr_t AActor = 0x98;
    uintptr_t CurrentActor = 0x8;
    uintptr_t Mesh = 0x310;
    uintptr_t Revivefromdbnotime = 0x4250; //
    uintptr_t TeamId = 0x6A1;
    uintptr_t LocalActorPos = 0x128;
    uintptr_t ComponetToWorld = 0x188;
    uintptr_t BoneArray = 0x5E8;
    uintptr_t Velocity = 0x170;
    uintptr_t PawnPrivate = 0x300;
    uintptr_t PlayerArray = 0x2A0;

    uintptr_t ReviveFromDBNOTime = 0x4250;
    uintptr_t RelativeLocation = 0x128;

}


namespace W2S {
    uintptr_t chain69 = 0xA8;
    uintptr_t chain699 = 0x7E8;
    uintptr_t chain = 0x70;
    uintptr_t chain1 = 0x98;
    uintptr_t chain2 = 0x140;
    uintptr_t vDelta = 0x10;
    uintptr_t zoom = 0x580;
}