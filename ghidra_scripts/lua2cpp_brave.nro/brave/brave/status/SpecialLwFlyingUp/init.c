
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwFlyingDown_init(L2CFighterBrave *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack368 [16];
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
  
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,*pfVar3);
  lib::L2CValue::L2CValue(aLStack160,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack144,pfVar3[2]);
  FUN_7100004a60(aLStack128,this,aLStack176);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack208,pLVar4);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLOAT_TARGET_POS_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  lib::L2CValue::operator_(pLVar5,pLVar4);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::operator_(aLStack192,aLStack128);
  lib::L2CValue::operator_(aLStack256,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
  fVar8 = (float)lib::L2CValue::as_number(pLVar4);
  fVar9 = (float)lib::L2CValue::as_number(pLVar5);
  fVar10 = (float)lib::L2CValue::as_number(this_00);
  fVar8 = (float)app::sv_math::vec3_length(fVar8,fVar9,fVar10);
  lib::L2CValue::L2CValue(aLStack320,fVar8);
  lib::L2CValue::L2CValue(aLStack336);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_FLYING_UP);
  uVar6 = lib::L2CValue::operator__(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack352,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack368,0x136a137966);
    uVar6 = lib::L2CValue::as_integer(aLStack352);
    uVar7 = lib::L2CValue::as_integer(aLStack368);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::operator_(aLStack336,aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack352,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack368,0xe08112765);
    uVar6 = lib::L2CValue::as_integer(aLStack352);
    uVar7 = lib::L2CValue::as_integer(aLStack368);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::operator_(aLStack336,aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  pLVar4 = aLStack336;
  lib::L2CValue::operator_(aLStack320,pLVar4);
  lib::L2CAgent::math_toint((L2CAgent *)aLStack112,pLVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  uVar6 = lib::L2CValue::operator_(aLStack352,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::operator_(aLStack336,aLStack320);
    lib::L2CValue::L2CValue(aLStack112,1);
    lib::L2CValue::operator_(aLStack352,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_ARRIVE_TIME);
  iVar1 = lib::L2CValue::as_integer(aLStack352);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

