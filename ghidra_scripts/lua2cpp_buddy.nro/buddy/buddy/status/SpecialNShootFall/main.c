
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootFall_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Fighter *pFVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  app::lua_bind::ControlModule__reset_flick_x_impl(this->moduleAccessor);
  app::lua_bind::ControlModule__reset_flick_sub_x_impl(this->moduleAccessor);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1c);
  lib::L2CValue::L2CValue(aLStack80,0xfe);
  lib::L2CValue::operator_(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lua2cpp::L2CFighterCommon::sub_set_pass(this);
  }
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
  GVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  uVar5 = lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    FUN_7100028800(this);
  }
  FUN_71000259e0(this);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_START);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack80,2);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,
                 _FIGHTER_BUDDY_INSTANCE_WORK_ID_FLAG_SPECIAL_N_SHOOT_AIR_NEXT_COUNT_CHECK_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_JUMP_FLY_NEXT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar6,false);
  lib::L2CValue::L2CValue(aLStack80,SpecialNShootFall_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

