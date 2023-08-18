
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PackunSpecialNShoot_main(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  Fighter *pFVar8;
  float *pfVar9;
  L2CValue *pLVar10;
  float fVar11;
  float fVar12;
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
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack192,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_N_FLAG_SHOOT_FRONT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack192,0x156a7f214a);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack192);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (this->moduleAccessor,HVar7,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,0x156d12e553);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack192);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (this->moduleAccessor,HVar7,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_N_FLAG_SHOOT_FRONT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack192,0x111c22d555);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack192);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (this->moduleAccessor,HVar7,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,0x111b4f114c);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack192);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (this->moduleAccessor,HVar7,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack192);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
  fVar11 = (float)app::FighterSpecializer_Packun::get_special_n_spikeball_speed_mul(pFVar8);
  lib::L2CValue::L2CValue(aLStack128,fVar11);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue
            (aLStack192,_FIGHTER_PACKUN_STATUS_SPECIAL_N_WORK_FLOAT_SHOOT_SPIKEBALL_SPEED_MUL);
  fVar11 = (float)lib::L2CValue::as_number(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack192,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack112,0x1e11a405f1);
  lib::L2CValue::L2CValue(aLStack128,0);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  HVar7 = lib::L2CValue::as_hash(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar7,uVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0x2e70a9644c);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACKUN_SPIKEBALL_STATUS_KIND_WAIT);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
  app::FighterSpecializer_Packun::update_special_n_spikeball_pos(pFVar8);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KIRBY_STATUS_KIND_PACKUN_SPECIAL_N_WAIT);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACKUN_STATUS_SPECIAL_N_FLAG_SHOOT_PREVIOUS_WAIT);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,*pfVar9);
  lib::L2CValue::L2CValue(aLStack176,pfVar9[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar9[2]);
  FUN_7100009380(aLStack144,this,aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_N_WORK_FLOAT_SHOOT_START_SPIKEBALL_POS_X);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar11);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_N_WORK_FLOAT_SHOOT_START_SPIKEBALL_POS_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,fVar11);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  pLVar5 = aLStack208;
  lib::L2CValue::operator_(pLVar10,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  pLVar5 = aLStack224;
  lib::L2CValue::operator_(pLVar10,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  fVar11 = (float)lib::L2CValue::as_number(aLStack240);
  fVar12 = (float)lib::L2CValue::as_number(aLStack256);
  fVar11 = (float)app::sv_math::vec2_length(fVar11,fVar12);
  lib::L2CValue::L2CValue(aLStack272,fVar11);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(aLStack272,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_PACKUN_STATUS_SPECIAL_N_WORK_FLOAT_SHOOT_START_SPIKEBALL_DISTANCE);
  fVar11 = (float)lib::L2CValue::as_number(aLStack288);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack112,PackunSpecialNShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

