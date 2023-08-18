
void __thiscall
L2CFighterDemon::status::SpecialNGroundShoot_main(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  fVar5 = (float)app::lua_bind::ControlModule__get_stick_dir_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack144,0x16acacde7d);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  uVar2 = lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0x1632cf261a);
    uVar2 = lib::L2CValue::as_integer(aLStack128);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    uVar2 = lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xc1823f7be);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xc86400fd9);
    lib::L2CValue::operator_(aLStack112,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar4 = lib::L2CValue::as_hash(aLStack112);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialNGroundShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

