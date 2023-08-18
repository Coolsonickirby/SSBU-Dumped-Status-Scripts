
void __thiscall
L2CFighterPickel::status::LandingLight_main(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_710006f430(aLStack112,this);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    FUN_7100088b80(aLStack112,this);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xdd934faa1);
      lib::L2CValue::L2CValue(aLStack112,-1.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,true);
      lib::L2CValue::L2CValue(aLStack176,true);
      HVar4 = lib::L2CValue::as_hash(aLStack96);
      fVar5 = (float)lib::L2CValue::as_number(aLStack112);
      fVar6 = (float)lib::L2CValue::as_number(aLStack128);
      fVar7 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar4,fVar5,fVar6,fVar7,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,LandingLight_main_loop);
      lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lua2cpp::L2CFighterCommon::status_LandingLight(this);
  }
  return;
}

