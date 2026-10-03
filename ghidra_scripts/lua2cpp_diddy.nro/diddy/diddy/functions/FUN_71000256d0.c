
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000256d0(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  void *pvVar7;
  ulong uVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  uVar2 = app::lua_bind::LinkModule__get_node_object_id_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,uVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = app::sv_battle_object::kind(uVar2);
  lib::L2CValue::L2CValue(aLStack96,uVar2);
  lib::L2CValue::L2CValue(aLStack112,0x17dbd23415);
  iVar1 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_STICK_ATTACK);
  uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x19bf1101fc);
    lib::L2CValue::operator=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = app::sv_battle_object::category(uVar2);
  lib::L2CValue::L2CValue(aLStack128,uVar2 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) goto LAB_71000258d8;
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KIND_KIRBY);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_GAMEWATCH);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_7100025880;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KIND_PURIN);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_7100025880;
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&FIGHTER_STATUS_KIND_CLIFF_WAIT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,pvVar7);
    }
    lib::L2CValue::L2CValue(aLStack160,0xcad2ee25e);
    lib::L2CValue::L2CValue(aLStack176,0xc07d88ea0);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar8 = lib::L2CValue::as_integer(aLStack176);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(pBVar9,uVar4,uVar8);
    lib::L2CValue::L2CValue(aLStack144,iVar1);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_SHARE_TYPE_GIRL);
    uVar4 = lib::L2CValue::operator==(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,BODY_TYPE_MOTION_GIRL);
      HVar5 = lib::L2CValue::as_hash(aLStack112);
      iVar1 = lib::L2CValue::as_integer(aLStack144);
      HVar5 = app::lua_bind::FighterMotionModuleImpl__add_body_type_hash_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,iVar1);
      lib::L2CValue::L2CValue(aLStack64,HVar5);
      lib::L2CValue::operator=(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar6 = aLStack144;
      goto LAB_71000258cc;
    }
  }
  else {
LAB_7100025880:
    lib::L2CValue::L2CValue(aLStack128,_BODY_TYPE_MOTION_DX);
    HVar5 = lib::L2CValue::as_hash(aLStack112);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    HVar5 = app::lua_bind::FighterMotionModuleImpl__add_body_type_hash_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,iVar1);
    lib::L2CValue::L2CValue(aLStack64,HVar5);
    lib::L2CValue::operator=(aLStack112,aLStack64);
    pLVar6 = aLStack64;
LAB_71000258cc:
    lib::L2CValue::~L2CValue(pLVar6);
  }
  lib::L2CValue::~L2CValue(aLStack128);
LAB_71000258d8:
  app::LinkEventThrow::new_l2c_table();
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack64,0x122e8725f7);
  lib::L2CValue::operator=(pLVar6,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0xc3e3c1ede);
  lib::L2CValue::operator=(pLVar6,aLStack112);
  lib::L2CValue::L2CValue(aLStack144,LINK_NO_CAPTURE);
  FUN_710000f3a0(aLStack64,param_1,aLStack144,aLStack128);
  lib::L2CValue::operator=(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_MONKEY_FLIP_WORK_INT_TARGET_TASK);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DIDDY_STATUS_MONKEY_FLIP_WORK_INT_TARGET_HIT_GROUP);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar3);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DIDDY_STATUS_MONKEY_FLIP_WORK_INT_TARGET_HIT_NO);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar3);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_MONKEY_FLIP_WORK_INT_CLING_TASK_ID);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

