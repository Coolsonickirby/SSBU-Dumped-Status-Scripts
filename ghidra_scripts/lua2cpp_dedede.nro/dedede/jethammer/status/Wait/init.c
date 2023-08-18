
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDededeJethammer::status::Attack_init(L2CWeaponDededeJethammer *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float fVar6;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_WAIT);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_KIND_FALL);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_710003c10c;
  }
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_FLAG_EFFECT_HOLD_ON);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_MA_MSC_EFFECT_REQUEST_FOLLOW);
    lib::L2CValue::L2CValue(aLStack144,0x156f48b8da);
    lib::L2CValue::L2CValue(aLStack160,0x42f95f54a);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,1.0);
    lib::L2CValue::L2CValue(aLStack288,false);
    lib::L2CValue::L2CValue(aLStack304,_EFFECT_SUB_ATTRIBUTE_CONCLUDE_STATUS);
    lib::L2CValue::L2CValue(aLStack320,0);
    lib::L2CValue::L2CValue(aLStack336,0);
    FUN_710003ce20(aLStack80,this,aLStack128,aLStack144,aLStack160,aLStack176,aLStack192,aLStack208,
                   aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,aLStack304,aLStack320,
                   aLStack336);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_INT_EFFECT_ID_HOLE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_MA_MSC_EFFECT_REQUEST_FOLLOW);
    lib::L2CValue::L2CValue(aLStack144,0x167cbccd7f);
    lib::L2CValue::L2CValue(aLStack160,0x6def58a36);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,1.0);
    lib::L2CValue::L2CValue(aLStack288,false);
    lib::L2CValue::L2CValue(aLStack304,_EFFECT_SUB_ATTRIBUTE_CONCLUDE_STATUS);
    lib::L2CValue::L2CValue(aLStack320,0);
    lib::L2CValue::L2CValue(aLStack336,0);
    FUN_710003ce20(aLStack80,this,aLStack128,aLStack144,aLStack160,aLStack176,aLStack192,aLStack208,
                   aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,aLStack304,aLStack320,
                   aLStack336);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_INT_EFFECT_ID_HOLE2);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_JETHAMMER_STATUS_WORK_FLAG_EFFECT_HOLD_ON);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_710003c10c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

