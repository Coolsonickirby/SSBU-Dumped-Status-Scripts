
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntGunman::status::Win3L2_main(L2CWeaponDuckhuntGunman *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
  fVar3 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
  app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack80,-20.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,10.0);
  uVar4 = lib::L2CValue::as_number(aLStack80);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  uVar6 = lib::L2CValue::as_number(aLStack112);
  local_40 = CONCAT44(uVar5,uVar4);
  uStack56 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_40);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,4);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_KIND);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_DUCKHUNT_GUNMAN_STATUS_KIND_READY);
  lib::L2CValue::L2CValue(aLStack80,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

