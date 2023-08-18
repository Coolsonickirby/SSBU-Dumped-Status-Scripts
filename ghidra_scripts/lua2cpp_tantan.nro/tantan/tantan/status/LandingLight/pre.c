
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::LandingLight_pre(L2CFighterTantan *this,L2CValue *return_value)

{
  bool bVar1;
  L2CValue *this_00;
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
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
    lua2cpp::L2CFighterCommon::sub_pre_landing_kinetic_type(this);
    lib::L2CValue::L2CValue(aLStack160,0);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_LANDING_LIGHT);
    uVar2 = lib::L2CValue::operator__(this_00,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,aLStack160);
      FUN_7100070c20(aLStack240,aLStack256);
      lib::L2CValue::operator_(aLStack96,aLStack240);
      lib::L2CValue::operator_(aLStack112,aLStack224);
      lib::L2CValue::operator_(aLStack128,aLStack208);
      lib::L2CValue::operator_(aLStack144,aLStack192);
      lib::L2CValue::operator_(aLStack160,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::L2CValue(aLStack240,aLStack96);
    lib::L2CValue::L2CValue(aLStack272,aLStack112);
    lib::L2CValue::L2CValue(aLStack288,aLStack128);
    lib::L2CValue::L2CValue(aLStack304,aLStack144);
    lib::L2CValue::L2CValue(aLStack320,aLStack160);
    lua2cpp::L2CFighterCommon::status_pre_LandingLight_param
              (this,(L2CValue)0x10,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack240);
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

