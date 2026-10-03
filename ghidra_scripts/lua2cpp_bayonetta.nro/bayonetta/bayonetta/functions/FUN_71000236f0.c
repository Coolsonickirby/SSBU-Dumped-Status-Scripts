
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000236f0(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  Hash40 HVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar3 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FINAL);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_START);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_SCENE01);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_END);
        uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
          pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
          app::lua_bind::FighterBayonettaFinalModule__final_end_exit_impl
                    (BATTLE_OBJECT_CATEGORY_ITEM,pBVar6);
        }
      }
      else {
        app::lua_bind::FighterManager__exit_finalbg_impl(FIGHTER_ATTACK100_TYPE_NONE);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
        pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
        app::lua_bind::FighterBayonettaFinalModule__final_scene01_exit_impl
                  (BATTLE_OBJECT_CATEGORY_ITEM,pBVar6);
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::L2CValue(aLStack96,0x1086bdf904);
        lib::L2CValue::L2CValue(aLStack112,true);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar2 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::PhysicsModule__set_swing_joint_name_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),HVar7,
                   (bool)(bVar2 & 1));
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::L2CValue(aLStack96,0x104a17f99a);
        lib::L2CValue::L2CValue(aLStack112,true);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar2 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::PhysicsModule__set_swing_joint_name_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),HVar7,
                   (bool)(bVar2 & 1));
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::L2CValue(aLStack96,0x10c498fe79);
        lib::L2CValue::L2CValue(aLStack112,true);
        bVar1 = lib::L2CValue::as_bool(aLStack64);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        bVar2 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::PhysicsModule__set_swing_joint_name_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),HVar7,
                   (bool)(bVar2 & 1));
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      app::lua_bind::FighterBayonettaFinalModule__final_start_exit_impl
                (BATTLE_OBJECT_CATEGORY_ITEM,pBVar6);
    }
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    app::lua_bind::FighterBayonettaFinalModule__final_exit_impl(BATTLE_OBJECT_CATEGORY_ITEM,pBVar6);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

