
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialNRollAir_main(L2CFighterPurin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
  GVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xd483c0ed2);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  fVar5 = (float)lib::L2CValue::as_number(aLStack112);
  fVar6 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  fVar5 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SpecialNRollAir_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}
