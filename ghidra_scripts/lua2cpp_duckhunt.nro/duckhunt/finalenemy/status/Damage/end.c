
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntFinalenemy::status::Damage_end
          (L2CWeaponDuckhuntFinalenemy *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  L2CValue *this_00;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_FINALENEMY_STATUS_KIND_DAMAGE_SLOW);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xc8e1d43a3);
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::L2CValue(aLStack96,true);
    HVar4 = lib::L2CValue::as_hash(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::EffectModule__kill_kind_impl
              (this->moduleAccessor,HVar4,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

