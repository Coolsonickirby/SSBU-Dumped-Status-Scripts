
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000135a0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_KICK_FALL_ONOFF);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::KineticModule__change_kinetic_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::KineticModule__change_kinetic_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      }
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

