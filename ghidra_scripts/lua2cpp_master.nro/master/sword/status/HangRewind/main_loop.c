
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterSword::status::HangRewind_main_loop
          (L2CWeaponMasterSword *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MASTER_SWORD_INSTANCE_WORK_ID_FLAG_HIT_EFFECT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_MASTER_SWORD_INSTANCE_WORK_ID_FLAG_HIT_EFFECT_DETACH);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
        this_00 = aLStack96;
      }
      else {
        bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar3 = lib::L2CValue::operator__(aLStack112,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar3 & 1) == 0) goto LAB_710003dacc;
        lib::L2CValue::L2CValue(aLStack64,0x114331b134);
        lib::L2CValue::L2CValue(aLStack80,5);
        HVar4 = lib::L2CValue::as_hash(aLStack64);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar4,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_MASTER_SWORD_INSTANCE_WORK_ID_FLAG_HIT_EFFECT_DETACH);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        this_00 = aLStack64;
      }
      lib::L2CValue::_L2CValue(this_00);
    }
  }
LAB_710003dacc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

