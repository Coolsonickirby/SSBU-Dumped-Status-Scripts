
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::SpecialHiFail_main_loop(L2CFighterReflet *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *this_01;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  KineticEnergy *pKVar10;
  FighterKineticEnergyController *pFVar11;
  KineticEnergyNormal *pKVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  ulong local_1e0;
  undefined8 uStack472;
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
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack128,0);
  ppBVar13 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar13);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_1e0,true);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_1e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
LAB_710001ff8c:
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    if ((bVar2 & 1U) == 0) {
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_REFLET_STATUS_SPECIAL_HI_FLAG_JUMP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_REFLET_STATUS_COMMON_FLAG_MAGIC_EMPTY_EFFECT_DONE);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
        lib::L2CValue::operator_((L2CValue *)&local_70);
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_1e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0x11874b1edc);
          lib::L2CValue::L2CValue(aLStack144,0x5eb263e0d);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,0.0);
          lib::L2CValue::L2CValue(aLStack240,0.0);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CValue::L2CValue(aLStack288,1.0);
          lib::L2CValue::L2CValue(aLStack304,true);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_1e0);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
          app::sv_module_access::effect(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1e0,
                     _FIGHTER_REFLET_STATUS_COMMON_FLAG_MAGIC_EMPTY_EFFECT_DONE);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
        }
      }
      this_00 = &this->globalTable;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_1e0,SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_1e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack208,0x1850debdad);
          uVar5 = lib::L2CValue::as_integer(aLStack176);
          uVar7 = lib::L2CValue::as_integer(aLStack208);
          fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack144,fVar14);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,0.0);
          lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1e0,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
          fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack336,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_7100020edc;
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,false);
      uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      if ((uVar5 & 1) != 0) {
        bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar13);
        lib::L2CValue::L2CValue((L2CValue *)&local_1e0,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_1e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
        if ((bVar2 & 1U) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack384,FIGHTER_STATUS_KIND_FALL);
            lib::L2CValue::L2CValue(aLStack400,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
            lib::L2CValue::_L2CValue(aLStack400);
            pLVar6 = aLStack384;
          }
          else {
            lib::L2CValue::L2CValue(aLStack352,FIGHTER_STATUS_KIND_WAIT);
            lib::L2CValue::L2CValue(aLStack368,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack368);
            pLVar6 = aLStack352;
          }
          lib::L2CValue::_L2CValue(pLVar6);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_7100020edc;
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_REFLET_STATUS_SPECIAL_HI_FLAG_JUMP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,
                   _FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_FAILURE_HOP);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_1e0,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_1e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1e0,
                     _FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_FAILURE_HOP);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue(aLStack144,true);
          lib::L2CValue::L2CValue(aLStack416,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,GROUND_CORRECT_KIND_AIR);
          GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          app::lua_bind::GroundModule__set_correct_impl(*ppBVar13,GVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue(aLStack432,0.0);
          lib::L2CValue::L2CValue(aLStack448,0.0);
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
          lib::L2CValue::_L2CValue(aLStack448);
          lib::L2CValue::_L2CValue(aLStack432);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
          this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          uVar16 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,(float)uVar16);
          lib::L2CValue::L2CValue(aLStack464,(float)((ulong)uVar16 >> 0x20));
          lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_1e0);
          lib::L2CValue::operator_(this_01,aLStack464);
          lib::L2CValue::_L2CValue(aLStack464);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,0x1086bc4a93);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0xc91e8190d);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack208,fVar14);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,0x1086bc4a93);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0xce6ef299b);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack224,fVar14);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,-1.0);
          uVar5 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::operator_(aLStack208);
            lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_1e0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack240,pvVar8);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue(aLStack256,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack496,0.0);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
          iVar3 = lib::L2CValue::as_integer(aLStack256);
          uVar5 = lib::L2CValue::as_number(aLStack272);
          uVar15 = lib::L2CValue::as_number(aLStack224);
          local_1e0 = uVar5 & 0xffffffff | (ulong)uVar15 << 0x20;
          uStack472 = 0;
          uVar5 = lib::L2CValue::as_number(aLStack288);
          lVar17 = lib::L2CValue::as_number(aLStack304);
          uVar15 = lib::L2CValue::as_number(aLStack496);
          local_70 = uVar5 & 0xffffffff | lVar17 << 0x20;
          uStack104 = (ulong)uVar15;
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
          pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack240);
          app::lua_bind::KineticEnergy__reset_energy_impl
                    (pKVar10,iVar3,(Vector2f *)&local_1e0,(Vector3f *)&local_70,pBVar9);
          lib::L2CValue::_L2CValue(aLStack496);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          app::lua_bind::KineticModule__enable_energy_impl(*ppBVar13,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack256,pvVar8);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack256);
          app::lua_bind::KineticEnergy__unable_impl(pKVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack272,pvVar8);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue(aLStack288,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack496,0.0);
          lib::L2CValue::L2CValue(aLStack512,0.0);
          lib::L2CValue::L2CValue(aLStack528,0.0);
          lib::L2CValue::L2CValue(aLStack544,0.0);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
          iVar3 = lib::L2CValue::as_integer(aLStack288);
          uVar5 = lib::L2CValue::as_number(aLStack304);
          uVar15 = lib::L2CValue::as_number(aLStack496);
          local_1e0 = uVar5 & 0xffffffff | (ulong)uVar15 << 0x20;
          uStack472 = 0;
          uVar5 = lib::L2CValue::as_number(aLStack512);
          lVar17 = lib::L2CValue::as_number(aLStack528);
          uVar15 = lib::L2CValue::as_number(aLStack544);
          local_70 = uVar5 & 0xffffffff | lVar17 << 0x20;
          uStack104 = (ulong)uVar15;
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
          pKVar10 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack272);
          app::lua_bind::KineticEnergy__reset_energy_impl
                    (pKVar10,iVar3,(Vector2f *)&local_1e0,(Vector3f *)&local_70,pBVar9);
          lib::L2CValue::_L2CValue(aLStack544);
          lib::L2CValue::_L2CValue(aLStack528);
          lib::L2CValue::_L2CValue(aLStack512);
          lib::L2CValue::_L2CValue(aLStack496);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_1e0);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          app::lua_bind::KineticModule__enable_energy_impl(*ppBVar13,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack288,0x2c13759450);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          uVar7 = lib::L2CValue::as_integer(aLStack288);
          fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar5,uVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::L2CValue(aLStack304,0xf71f4d4f8);
          lib::L2CValue::L2CValue(aLStack496,0);
          uVar5 = lib::L2CValue::as_integer(aLStack304);
          uVar7 = lib::L2CValue::as_integer(aLStack496);
          fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar5,uVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,fVar14);
          lib::L2CValue::operator_((L2CValue *)&local_1e0,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue(aLStack496);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::L2CValue(aLStack496,0xf25ec86be);
          lib::L2CValue::L2CValue(aLStack512,0);
          uVar5 = lib::L2CValue::as_integer(aLStack496);
          uVar7 = lib::L2CValue::as_integer(aLStack512);
          fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar5,uVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,fVar14);
          lib::L2CValue::operator_((L2CValue *)&local_1e0,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue(aLStack512);
          lib::L2CValue::_L2CValue(aLStack496);
          lib::L2CValue::L2CValue(aLStack512,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack528,0x11258894de);
          uVar5 = lib::L2CValue::as_integer(aLStack512);
          uVar7 = lib::L2CValue::as_integer(aLStack528);
          fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar5,uVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,fVar14);
          lib::L2CValue::operator_((L2CValue *)&local_1e0,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue(aLStack528);
          lib::L2CValue::_L2CValue(aLStack512);
          fVar14 = (float)lib::L2CValue::as_number(aLStack288);
          pFVar11 = (FighterKineticEnergyController *)lib::L2CValue::as_pointer(aLStack272);
          app::lua_bind::FighterKineticEnergyController__set_accel_x_mul_impl(pFVar11,fVar14);
          fVar14 = (float)lib::L2CValue::as_number(aLStack304);
          pFVar11 = (FighterKineticEnergyController *)lib::L2CValue::as_pointer(aLStack272);
          app::lua_bind::FighterKineticEnergyController__set_accel_x_add_impl(pFVar11,fVar14);
          lib::L2CValue::L2CValue(aLStack512,0.0);
          uVar5 = lib::L2CValue::as_number(aLStack496);
          uVar15 = lib::L2CValue::as_number(aLStack512);
          local_1e0 = uVar5 & 0xffffffff | (ulong)uVar15 << 0x20;
          uStack472 = 0;
          pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack272);
          app::lua_bind::KineticEnergyNormal__set_limit_speed_impl(pKVar12,(Vector2f *)&local_1e0);
          lib::L2CValue::_L2CValue(aLStack512);
          lib::L2CValue::L2CValue((L2CValue *)&local_1e0,FIGHTER_KINETIC_ENERGY_ID_MOTION);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
          app::lua_bind::KineticModule__unable_energy_impl(*ppBVar13,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
          lib::L2CValue::_L2CValue(aLStack496);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_1e0,_FIGHTER_REFLET_STATUS_SPECIAL_HI_FLAG_JUMP);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_1e0);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue((L2CValue *)&local_1e0,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_1e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_1e0,false);
      uVar5 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1e0);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) != 0) goto LAB_710001ff8c;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_7100020edc:
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

