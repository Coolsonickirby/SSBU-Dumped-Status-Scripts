
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001de80(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_ELIGHT_METEOR_INSTANCE_WORK_ID_INT_GROUND_COLLISION_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,0);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__set_correct_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),GVar4);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar2 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::GroundModule__set_test_coll_stop_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar2 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::GroundModule__set_passable_check_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

