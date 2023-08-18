
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackStand6_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  undefined8 uVar12;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
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
  ulong local_70;
  undefined8 uStack104;
  ulong local_60;
  undefined8 uStack88;
  
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,true);
  uVar5 = lib::L2CValue::operator__(aLStack224,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack224);
  }
  else {
    lib::L2CValue::L2CValue(aLStack464,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x30);
    lib::L2CValue::L2CValue(aLStack176,false);
    uVar5 = lib::L2CValue::operator__(aLStack288,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,true);
      return;
    }
  }
  lib::L2CValue::L2CValue
            (aLStack176,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_KEEP_SITUATION_AIR_PREV);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack480,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_KEEP_SITUATION_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack496,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack496);
  app::lua_bind::StatusModule__set_keep_situation_air_impl(*ppBVar9,(bool)(bVar1 & 1));
  uVar5 = lib::L2CValue::operator__(aLStack480,aLStack496);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,true);
    uVar5 = lib::L2CValue::operator__(aLStack496,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack512,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_JUMP);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_KEEP_SITUATION_AIR_PREV);
    bVar1 = lib::L2CValue::as_bool(aLStack496);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__set_flag_impl(*ppBVar9,(bool)(bVar1 & 1),iVar3);
LAB_710002cd10:
    pLVar6 = aLStack176;
LAB_710002cd14:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,false);
    uVar5 = lib::L2CValue::operator__(aLStack496,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack224,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue((L2CValue *)return_value,true);
        goto LAB_710002d64c;
      }
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_JUMP);
      iVar3 = lib::L2CValue::as_integer(aLStack288);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack176,true);
      uVar5 = lib::L2CValue::operator__(aLStack224,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack224);
        pLVar6 = aLStack288;
        goto LAB_710002cd14;
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_LANDING);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack176,false);
      uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar4 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,FIGHTER_KINETIC_TYPE_MOTION);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_LANDING);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        goto LAB_710002cd10;
      }
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)return_value,true);
    goto LAB_710002d64c;
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdf05c072b);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1f3b00bab8);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack288,iVar3);
  lib::L2CValue::L2CValue(aLStack176,1);
  lib::L2CValue::operator_(aLStack288,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  uVar5 = lib::L2CValue::operator__(aLStack224,pLVar6);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_IS_RAY_CHECK_RESULT);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack176);
    uVar12 = app::lua_bind::GroundModule__get_center_pos_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack176,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue(aLStack224,aLStack176);
    lib::L2CValue::L2CValue(aLStack288,aLStack160);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    uVar12 = app::lua_bind::PostureModule__pos_2d_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack224,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue(aLStack288,aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack208);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack256,fVar10);
    lib::L2CValue::L2CValue(aLStack288,-0.01);
    lib::L2CValue::operator_(aLStack256,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_70);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack256);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_WORK_FLOAT_START_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack288,fVar10);
    uVar5 = lib::L2CValue::operator_(aLStack288,pLVar6);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_WORK_FLOAT_START_Y);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
      lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack240,aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
    lib::L2CValue::L2CValue(aLStack304,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    uVar12 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack288,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack288);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack272);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdf05c072b);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x22232fc291);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack304,fVar10);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,pLVar8);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,pLVar8);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::operator_(aLStack304);
    lib::L2CValue::operator_(aLStack416,aLStack240);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,pLVar8);
    lib::L2CValue::operator_(aLStack400,aLStack432);
    lib::L2CValue::L2CValue(aLStack448,true);
    uVar5 = lib::L2CValue::as_number(aLStack336);
    uVar11 = lib::L2CValue::as_number(aLStack352);
    local_60 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
    uStack88 = 0;
    uVar5 = lib::L2CValue::as_number(aLStack368);
    uVar11 = lib::L2CValue::as_number(aLStack384);
    local_70 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
    uStack104 = 0;
    bVar1 = lib::L2CValue::as_bool(aLStack448);
    bVar1 = app::lua_bind::GroundModule__ray_check_impl
                      (*ppBVar9,(Vector2f *)&local_60,(Vector2f *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar5 = lib::L2CValue::operator__(aLStack320,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_IS_RAY_CHECK_RESULT
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
        lib::L2CValue::L2CValue(aLStack320,1.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
        app::sv_kinetic_energy::set_speed_mul_2nd(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        goto LAB_710002d608;
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_DEMON_STATUS_ATTACK_STAND_6_FLAG_IS_RAY_CHECK_RESULT
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
LAB_710002d608:
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002d64c:
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  return;
}

