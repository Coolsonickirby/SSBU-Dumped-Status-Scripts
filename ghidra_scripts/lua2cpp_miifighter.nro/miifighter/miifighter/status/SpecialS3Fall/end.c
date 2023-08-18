
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialS3Fall_end(L2CFighterMiifighter *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_Y);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_DEAD);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_S3_LANDING);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_710002bd60;
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SWIM_DIVE);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__clear_speed_attr_impl(this->moduleAccessor,iVar1);
      goto LAB_710002bd08;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
    lib::L2CValue::L2CValue(aLStack96,0x1bc4a0a9d7);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar4,0);
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710002bd08:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
LAB_710002bd60:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

