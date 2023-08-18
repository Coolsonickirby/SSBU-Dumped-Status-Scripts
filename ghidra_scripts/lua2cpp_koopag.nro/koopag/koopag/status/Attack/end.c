
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKoopagKoopag::status::Attack_end(L2CWeaponKoopagKoopag *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KOOPA_KOOPAG_STATUS_KIND_END);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    app::lua_bind::CameraModule__end_final_zoom_out_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,0x1018ead674);
    HVar5 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar5,0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_INT_SIGHT_EFFECT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_EFFECT_HANDLE_NULL);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      uVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(this->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        uVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::EffectModule__remove_impl(this->moduleAccessor,uVar3,0);
      }
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

