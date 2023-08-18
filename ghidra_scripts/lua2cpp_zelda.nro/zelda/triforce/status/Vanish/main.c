
void __thiscall
L2CWeaponZeldaTriforce::status::Vanish_main(L2CWeaponZeldaTriforce *this,L2CValue *return_value)

{
  byte bVar1;
  Hash40 HVar2;
  L2CValue *this_00;
  float fVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x6136fa242);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  fVar3 = (float)lib::L2CValue::as_number(aLStack96);
  fVar4 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar2,fVar3,fVar4,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_710001f780(this);
  fVar3 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  this_00 = (L2CValue *)
            lib::L2CValue::operator__((L2CValue *)&this[1].field_0x60[0].field_0x10,0x5ec462584);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Vanish_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

