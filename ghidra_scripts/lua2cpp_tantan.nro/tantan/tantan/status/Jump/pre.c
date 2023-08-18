
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterTantan::status::Jump_pre(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,true);
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272,false);
    lib::L2CValue::operator_(aLStack96,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
  }
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  lua2cpp::L2CFighterCommon::status_pre_Jump_Common_param(this,(L2CValue)0x80);
  lib::L2CValue::L2CValue(aLStack272,0);
  uVar2 = lib::L2CValue::operator__(aLStack112,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_FLAG);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_INT);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_WORK_KEEP_FLAG_JUMP_FLOAT);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_JUMP);
    lib::L2CValue::L2CValue(aLStack192,0);
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack288,aLStack192);
      FUN_7100070c20(aLStack272,aLStack288);
      lib::L2CValue::operator_(aLStack112,aLStack272);
      lib::L2CValue::operator_(aLStack144,aLStack256);
      lib::L2CValue::operator_(aLStack160,aLStack240);
      lib::L2CValue::operator_(aLStack176,aLStack224);
      lib::L2CValue::operator_(aLStack192,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
    }
    lib::L2CValue::L2CValue(aLStack272,aLStack112);
    lib::L2CValue::L2CValue(aLStack304,aLStack144);
    lib::L2CValue::L2CValue(aLStack320,aLStack160);
    lib::L2CValue::L2CValue(aLStack336,aLStack176);
    lib::L2CValue::L2CValue(aLStack352,aLStack192);
    lua2cpp::L2CFighterCommon::status_pre_Jump_sub_param
              (this,(L2CValue)0xf0,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

