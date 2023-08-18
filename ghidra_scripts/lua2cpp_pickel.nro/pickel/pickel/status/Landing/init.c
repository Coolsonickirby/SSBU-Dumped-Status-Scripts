
void __thiscall
L2CFighterPickel::status::Landing_init(L2CFighterPickel *this,L2CValue *return_value)

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
  
  FUN_710006f550(aLStack112,this);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xdc81fdc09);
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
  }
  else {
    lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

