
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001de00(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),3);
  uVar2 = lib::L2CValue::as_integer(this);
  uVar2 = app::sv_battle_object::kind(uVar2);
  lib::L2CValue::L2CValue(aLStack96,uVar2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_SAMUS);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_SPECIAL_S_WORK_FLAG_MATERIAL_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_MOTION_PART_SET_KIND_VISOR);
    lib::L2CValue::L2CValue(aLStack112,0x5fc47eb8a);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    HVar5 = lib::L2CValue::as_hash(aLStack112);
    fVar6 = (float)lib::L2CValue::as_number(aLStack128);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,fVar6,fVar7,
               (bool)(bVar1 & 1),false,0.0,true,true,false);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack112,0x1c5609e30f);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    HVar5 = lib::L2CValue::as_hash(aLStack112);
    app::lua_bind::LinkModule__send_event_nodes_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,0);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

