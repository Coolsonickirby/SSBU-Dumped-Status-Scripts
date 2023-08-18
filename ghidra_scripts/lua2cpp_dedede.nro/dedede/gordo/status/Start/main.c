
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDededeGordo::status::Start_main(L2CWeaponDededeGordo *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_PARENTS_SITUATION_CHANGE)
  ;
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_CONTINUE_MOT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    FUN_7100039800(aLStack128,this);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x14);
  lib::L2CValue::L2CValue(aLStack112,&LAB_7100039d30);
  lib::L2CValue::operator_(this_00,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_GORDO_MOTION_PART_SET_KIND_FACE);
  lib::L2CValue::L2CValue(aLStack144,0x5130181c4);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,true);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,false);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  HVar6 = lib::L2CValue::as_hash(aLStack144);
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  fVar8 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  bVar2 = lib::L2CValue::as_bool(aLStack208);
  fVar9 = (float)lib::L2CValue::as_number(aLStack224);
  bVar3 = lib::L2CValue::as_bool(aLStack240);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar4,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar9,
             (bool)(bVar3 & 1),true,false);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DEDEDE_GORDO_MOTION_PART_SET_KIND_FACE);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar7 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__set_rate_partial_impl(this->moduleAccessor,iVar4,fVar7);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,Start_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

