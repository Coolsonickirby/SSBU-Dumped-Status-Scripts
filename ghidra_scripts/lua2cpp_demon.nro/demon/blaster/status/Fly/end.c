
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDemonBlaster::status::Fly_end(L2CWeaponDemonBlaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  Weapon *pWVar4;
  ulong uVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  lib::L2CValue::L2CValue(aLStack64,true);
  pWVar4 = (Weapon *)lib::L2CValue::as_pointer(pLVar3);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::WeaponSpecializer_DemonBlaster::remove_shot_effect(pWVar4,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_INT_BEAM_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_EFFECT_HANDLE_NULL);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    pWVar4 = (Weapon *)lib::L2CValue::as_pointer(pLVar3);
    app::WeaponSpecializer_DemonBlaster::remove_beam_effect(pWVar4,false);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    pWVar4 = (Weapon *)lib::L2CValue::as_pointer(pLVar3);
    app::WeaponSpecializer_DemonBlaster::set_beam_end_effect(pWVar4);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pWVar4 = (Weapon *)lib::L2CValue::as_pointer(pLVar3);
  app::WeaponSpecializer_DemonBlaster::remove_head_effect(pWVar4,false);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

