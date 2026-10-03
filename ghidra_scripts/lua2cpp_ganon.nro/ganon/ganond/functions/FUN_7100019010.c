
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019010(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  HitStatus HVar5;
  ulong uVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_GANON_GANOND_INSTANCE_WORK_ID_FLAG_HITSTOP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_GANON_GANOND_INSTANCE_WORK_ID_FLAG_HITSTOP);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x12);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_GANON_GANOND_INSTANCE_WORK_ID_INT_INVINCIBLE_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_XLU);
      HVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::HitModule__set_whole_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar5,0);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_GANON_GANOND_INSTANCE_WORK_ID_INT_INVINCIBLE_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar6 = lib::L2CValue::operator<=(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_GANON_GANOND_INSTANCE_WORK_ID_INT_INVINCIBLE_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__dec_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_GANON_GANOND_INSTANCE_WORK_ID_INT_INVINCIBLE_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
        HVar5 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::HitModule__set_whole_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar5,0);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

