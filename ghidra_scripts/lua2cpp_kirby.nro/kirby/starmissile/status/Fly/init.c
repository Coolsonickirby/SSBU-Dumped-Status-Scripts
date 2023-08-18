
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKirbyStarmissile::status::FlyCopy_init
          (L2CWeaponKirbyStarmissile *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_STARMISSILE_STATUS_WORK_FLAG_SHOT_CANCELED);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_STARMISSILE_STATUS_KIND_FLY);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_STARMISSILE_STATUS_KIND_FLY_COPY);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x110eb1ecf4);
      lib::L2CValue::L2CValue(aLStack112,0x9f518063c);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_KIRBY_STARMISSILE_STATUS_WORK_INT_LIFE);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

