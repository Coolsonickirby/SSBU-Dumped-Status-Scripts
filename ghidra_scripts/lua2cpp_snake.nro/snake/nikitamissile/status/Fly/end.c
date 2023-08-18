
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeNikitamissile::status::Fly_end
          (L2CWeaponSnakeNikitamissile *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  Hash40 HVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_KIND_EXPLOSION);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x1332a52981);
    lib::L2CValue::L2CValue(aLStack80,5);
    HVar3 = lib::L2CValue::as_hash(aLStack64);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar3,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

