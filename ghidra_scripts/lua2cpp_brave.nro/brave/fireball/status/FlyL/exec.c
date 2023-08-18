
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBraveFireball::status::FlyL_exec(L2CWeaponBraveFireball *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0xe728cfd17);
  lib::L2CValue::L2CValue(aLStack96,0x163beb9ea2);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_INT_GROUND_EFFECT_COUNT)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_INT_GROUND_EFFECT_COUNT)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  uVar3 = lib::L2CValue::operator__(aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_BRAVE_FIREBALL_INSTANCE_WORK_ID_INT_GROUND_EFFECT_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
    app::WeaponSpecializer_BraveFireball::request_effect(pBVar5);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

