
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::LandingLight_pre(L2CFighterPickel *this,L2CValue *return_value)

{
  bool bVar1;
  ulong uVar2;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_pre_landing(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lua2cpp::L2CFighterCommon::sub_pre_landing_kinetic_type(this);
    lib::L2CValue::L2CValue(aLStack160,0);
    FUN_710006f430(aLStack176,this);
    lib::L2CValue::L2CValue(aLStack256,true);
    uVar2 = lib::L2CValue::operator__(aLStack176,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,aLStack160);
      FUN_7100093d50(aLStack256,aLStack176);
      lib::L2CValue::operator_(aLStack96,aLStack256);
      lib::L2CValue::operator_(aLStack112,aLStack240);
      lib::L2CValue::operator_(aLStack128,aLStack224);
      lib::L2CValue::operator_(aLStack144,aLStack208);
      lib::L2CValue::operator_(aLStack160,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue(aLStack256,aLStack96);
    lib::L2CValue::L2CValue(aLStack272,aLStack112);
    lib::L2CValue::L2CValue(aLStack288,aLStack128);
    lib::L2CValue::L2CValue(aLStack304,aLStack144);
    lib::L2CValue::L2CValue(aLStack320,aLStack160);
    lua2cpp::L2CFighterCommon::status_pre_LandingLight_param
              (this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}

