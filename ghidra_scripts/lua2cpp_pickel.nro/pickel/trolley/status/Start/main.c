
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelTrolley::status::Start_main(L2CWeaponPickelTrolley *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  GroundTouchID GVar3;
  int iVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  undefined8 uVar12;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack240,_GROUND_TOUCH_ID_DOWN);
  GVar3 = lib::L2CValue::as_integer(aLStack240);
  ppBVar10 = &this->moduleAccessor;
  pvVar7 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl(*ppBVar10,GVar3);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar7);
  }
  lib::L2CValue::_L2CValue(aLStack240);
  uVar8 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_TYPE_AIR);
    iVar4 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_TYPE_AIR);
    iVar4 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
  }
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_TYPE_AIR);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack240,-1);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_NO_GRAVITY_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack240);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack240,GROUND_CORRECT_KIND_GROUND);
    GVar6 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xdfbf78d6f);
    lib::L2CValue::L2CValue(aLStack112,0x19b5a63d52);
    uVar8 = lib::L2CValue::as_integer(aLStack96);
    uVar9 = lib::L2CValue::as_integer(aLStack112);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack240,iVar4);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_NO_GRAVITY_COUNT)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack240);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack240,GROUND_CORRECT_KIND_AIR);
    GVar6 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
  }
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar11 = (float)app::lua_bind::LinkModule__get_parent_scale_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    fVar11 = (float)lib::L2CValue::as_number(aLStack240);
    app::lua_bind::PostureModule__set_scale_impl(*ppBVar10,fVar11,false);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,false);
  lua2cpp::L2CWeaponCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,true);
  FUN_71000afb10(this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack240,_TEAM_NONE);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::TeamModule__set_hit_team_impl(*ppBVar10,iVar4);
  lib::L2CValue::_L2CValue(aLStack240);
  FUN_71000a6c40(this);
  lib::L2CValue::L2CValue(aLStack160,0xdfbf78d6f);
  lib::L2CValue::L2CValue(aLStack176,0x83de73088);
  uVar8 = lib::L2CValue::as_integer(aLStack160);
  uVar9 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack240,iVar4);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_LIFETIME);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  iVar5 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0xdfbf78d6f);
  lib::L2CValue::L2CValue(aLStack176,0x251dea32d0);
  uVar8 = lib::L2CValue::as_integer(aLStack160);
  uVar9 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack240,iVar4);
  lib::L2CValue::L2CValue
            (aLStack192,
             _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  iVar5 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack192,0xdfbf78d6f);
  lib::L2CValue::L2CValue(aLStack208,0x11e3f5c00c);
  uVar8 = lib::L2CValue::as_integer(aLStack192);
  uVar9 = lib::L2CValue::as_integer(aLStack208);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack176,iVar4);
  lib::L2CValue::L2CValue(aLStack240,1);
  lib::L2CValue::operator_(aLStack176,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue
            (aLStack240,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_GENERATE_RAIL_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  iVar5 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack160,0xdfbf78d6f);
  lib::L2CValue::L2CValue(aLStack176,0x16b0bad221);
  uVar8 = lib::L2CValue::as_integer(aLStack160);
  uVar9 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack240,iVar4);
  lib::L2CValue::L2CValue
            (aLStack192,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_GENERATE_RAIL_INTERVAL_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  iVar5 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176);
  uVar12 = app::lua_bind::GroundModule__get_down_pos_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack240,(float)uVar12);
  lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar12 >> 0x20));
  lib::L2CValue::operator_(aLStack160,aLStack240);
  lib::L2CValue::operator_(aLStack176,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack208,aLStack80);
  lib::L2CValue::L2CValue(aLStack256,aLStack160);
  lib::L2CValue::L2CValue(aLStack272,aLStack176);
  fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack288,fVar11);
  lib::L2CValue::L2CValue(aLStack304,true);
  lib::L2CValue::L2CValue(aLStack320,true);
  lib::L2CValue::L2CValue(aLStack336,false);
  lib::L2CValue::L2CValue(aLStack352,true);
  FUN_71000b4150(aLStack192,this,aLStack208,aLStack256,aLStack272,aLStack288,aLStack304,aLStack320,
                 aLStack336,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
  uVar8 = lib::L2CValue::operator__(aLStack192,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack240,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_GENERATE_POWERED_RAIL);
    iVar4 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_TYPE_AIR);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack240,true);
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    app::lua_bind::GroundModule__set_attach_ground_impl(*ppBVar10,(bool)(bVar1 & 1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,false);
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    app::lua_bind::GroundModule__set_attach_ground_impl(*ppBVar10,(bool)(bVar1 & 1));
  }
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,Start_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

