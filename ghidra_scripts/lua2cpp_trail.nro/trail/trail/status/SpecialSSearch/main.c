
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialSSearch_main(L2CFighterTrail *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  GroundCliffCheckKind GVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *this_00;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
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
  
  lib::L2CValue::L2CValue(aLStack128,0x1017efc1d7);
  lib::L2CValue::L2CValue(aLStack144,0x14965a4e97);
  lib::L2CValue::L2CValue(aLStack160,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,true);
  FUN_71000222a0(this);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,true);
  FUN_7100025270(this,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack224,0xc81cdff24);
  uVar8 = lib::L2CValue::as_integer(aLStack208);
  uVar9 = lib::L2CValue::as_integer(aLStack224);
  ppBVar10 = &this->moduleAccessor;
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar5 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar8 = lib::L2CValue::operator__(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack224,false);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__dec_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack208,0);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100025a90);
  lib::L2CValue::operator_(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x50000000);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_TARGET_ID);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar5 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_SEARCH_STICK);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack256,fVar11);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack256,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_BACK_ANGLE);
  fVar11 = (float)lib::L2CValue::as_number(aLStack240);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack96,-1.0);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
  fVar11 = (float)lib::L2CValue::as_number(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_ATTACK_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack256);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack240,iVar4);
  lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack320,0xaa5d51ffa);
  uVar8 = lib::L2CValue::as_integer(aLStack304);
  uVar9 = lib::L2CValue::as_integer(aLStack320);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack288,iVar4);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::operator_(aLStack288,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar8 = lib::L2CValue::operator__(aLStack240,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_CLIFF_HANG_DATA_SPECIAL_S);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar10,uVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES_NEAR);
    GVar7 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__set_cliff_check_impl(*ppBVar10,GVar7);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_GUIDE_EFFECT_HANDLE);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack240,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar8 = lib::L2CValue::operator__(aLStack240,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack272,fVar11);
    fVar11 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack288,fVar11);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack304,aLStack256);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xd0);
    lib::L2CValue::L2CValue(aLStack336,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack352,0xc7b8ee93b);
    uVar8 = lib::L2CValue::as_integer(aLStack336);
    uVar9 = lib::L2CValue::as_integer(aLStack352);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack320,fVar11);
    uVar8 = lib::L2CValue::operator__(aLStack320,aLStack96);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::L2CValue(aLStack320,true);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      bVar3 = lib::L2CValue::as_bool(aLStack320);
      app::lua_bind::EffectModule__kill_impl(*ppBVar10,uVar6,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue
                (aLStack320,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_GUIDE_EFFECT_HANDLE);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      iVar5 = lib::L2CValue::as_integer(aLStack320);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack320);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack352,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_GUIDE_EFFECT_ANGLE_ATTACK);
      iVar4 = lib::L2CValue::as_integer(aLStack352);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack336,fVar11);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack336,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
      fVar11 = (float)lib::L2CValue::as_number(aLStack320);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_SEARCH_STICK);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  FUN_7100022d80(this);
  lib::L2CValue::L2CValue(aLStack96,SpecialSSearch_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  return;
}

