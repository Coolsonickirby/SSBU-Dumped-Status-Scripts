
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialS_exec(L2CFighterGekkouga *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  HitStatus HVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *this_00;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_S_WARP_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  ppBVar8 = &this->moduleAccessor;
  app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_S_WARP_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack208,0x6243b3b24);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  uVar7 = lib::L2CValue::as_integer(aLStack208);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack176,iVar3);
  uVar6 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710000ce50;
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_S_WORK_INT_WARP_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar6 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
    app::lua_bind::VisibilityModule__set_whole_impl(*ppBVar8,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_HIT_STATUS_XLU);
    HVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::HitModule__set_whole_impl(*ppBVar8,HVar4,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
    app::lua_bind::AreaModule__set_whole_impl(*ppBVar8,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_S_WORK_INT_WARP_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_S_WORK_INT_WARP_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack176,0xa30185444);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  uVar7 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar6,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar6 & 1) != 0) {
    fVar9 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack160,fVar9);
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_SHADOW_X_POS);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_SHADOW_Y_POS);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    fVar9 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_WARP_GIMMICK);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) == 0) {
      fVar9 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack176,fVar9);
      fVar9 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack208,fVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.1);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      uVar10 = lib::L2CValue::as_number(aLStack176);
      uVar11 = lib::L2CValue::as_number(aLStack192);
      local_50 = CONCAT44(uVar11,uVar10);
      uStack72 = 0;
      app::lua_bind::GroundModule__set_shape_safe_pos_impl(*ppBVar8,(Vector2f *)&local_50);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    else {
      uVar10 = lib::L2CValue::as_number(aLStack144);
      uVar11 = lib::L2CValue::as_number(aLStack112);
      local_50 = CONCAT44(uVar11,uVar10);
      uStack72 = 0;
      app::lua_bind::GroundModule__set_shape_safe_pos_impl(*ppBVar8,(Vector2f *)&local_50);
    }
    uVar10 = lib::L2CValue::as_number(aLStack144);
    uVar11 = lib::L2CValue::as_number(aLStack112);
    uVar12 = lib::L2CValue::as_number(aLStack128);
    local_50 = CONCAT44(uVar11,uVar10);
    uStack72 = (ulong)uVar12;
    app::lua_bind::PostureModule__set_pos_impl(*ppBVar8,(Vector3f *)&local_50);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_WARP_AIR)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      uVar6 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_GROUND);
        GVar5 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar5);
        goto LAB_710000cdf8;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_WARP_AIR)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar5);
LAB_710000cdf8:
        lib::L2CValue::_L2CValue(aLStack176);
      }
    }
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_S_ATTACK);
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710000ce50:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

