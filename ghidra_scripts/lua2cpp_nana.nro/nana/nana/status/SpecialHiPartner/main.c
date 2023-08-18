
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNana::status::SpecialHiPartner_main(L2CFighterNana *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  LinkAttribute LVar4;
  Hash40 HVar5;
  Hash40 HVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_LINK_NO_PARTNER);
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack128,0x54f934137);
  lib::L2CValue::L2CValue(aLStack144,_CONSTRAINT_FLAG_ORIENTATION | CONSTRAINT_FLAG_POSITION);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  HVar6 = lib::L2CValue::as_hash(aLStack128);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
            (this->moduleAccessor,iVar2,HVar5,HVar6,uVar3,true);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_LINK_NO_PARTNER);
  lib::L2CValue::L2CValue(aLStack112,_LINK_ATTRIBUTE_REFERENCE_PARENT_SLOW);
  lib::L2CValue::L2CValue(aLStack128,false);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  LVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::LinkModule__set_attribute_impl(this->moduleAccessor,iVar2,LVar4,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack160,0xd07d69a9b);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  uVar8 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack96,SpecialHiPartner_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

