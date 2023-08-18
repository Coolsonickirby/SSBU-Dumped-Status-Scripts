
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNTurn_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CAgent *pLVar12;
  KineticEnergyNormal *pKVar13;
  ulong *puVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  undefined8 uVar17;
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  undefined auStack560 [32];
  L2CValue aLStack528 [16];
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
  ulong local_c0;
  undefined8 uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar15 = &this->moduleAccessor;
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack416,iVar3);
  lib::L2CValue::L2CValue(aLStack432,aLStack416);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack448,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue(aLStack464,true);
  fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack480,fVar16);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar16);
  uVar7 = lib::L2CValue::operator__((L2CValue *)&local_c0,aLStack480);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    fVar16 = (float)lib::L2CValue::as_number(aLStack480);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
    fVar16 = (float)lib::L2CValue::as_number(aLStack480);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_ROLL_DIR);
    fVar16 = (float)lib::L2CValue::as_number(aLStack480);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  fVar16 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack496,fVar16);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_ROLL_DIR);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack512,fVar16);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
  uVar7 = lib::L2CValue::operator_((L2CValue *)&local_c0,aLStack496);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  if ((uVar7 & 1) == 0) {
LAB_71001b850c:
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
    uVar7 = lib::L2CValue::operator_(aLStack496,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    if ((uVar7 & 1) == 0) goto LAB_71001b85cc;
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,1.0);
    uVar7 = lib::L2CValue::operator__(aLStack512,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    if ((uVar7 & 1) == 0) goto LAB_71001b85cc;
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,-1.0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_ROLL_DIR);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_c0);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,-1.0);
    lib::L2CValue::operator_(aLStack512,(L2CValue *)&local_c0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,-1.0);
    uVar7 = lib::L2CValue::operator__(aLStack512,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    if ((uVar7 & 1) == 0) goto LAB_71001b850c;
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,1.0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_ROLL_DIR);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_c0);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,1.0);
    lib::L2CValue::operator_(aLStack512,(L2CValue *)&local_c0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
LAB_71001b85cc:
  FUN_71001b63d0(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack528,fVar16);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,2.0);
  lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  FUN_71001baef0(&local_c0,this);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack224,0xf2dec0a89);
  uVar7 = lib::L2CValue::as_integer(aLStack112);
  uVar8 = lib::L2CValue::as_integer(aLStack224);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar15,uVar7,uVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,iVar3);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_c0);
  lib::L2CValue::operator_(aLStack160,aLStack512);
  lib::L2CValue::operator_(aLStack528,aLStack144);
  lib::L2CValue::operator_(aLStack528,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x10),aLStack528);
  FUN_71001b6c50(&local_c0,auStack560 + 0x10);
  lib::L2CValue::operator_(aLStack528,(L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  fVar16 = (float)lib::L2CValue::as_number(aLStack528);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,1);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__sub_int_impl(*ppBVar15,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0);
  puVar14 = &local_c0;
  uVar7 = lib::L2CValue::operator__(aLStack112,(L2CValue *)puVar14);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar16);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_c0);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    FUN_71001b9da0(this);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,false);
    puVar14 = &local_c0;
    lib::L2CValue::operator_(aLStack464,(L2CValue *)puVar14);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  fVar16 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar15);
  lib::L2CValue::L2CValue((L2CValue *)auStack560,fVar16);
  lib::L2CAgent::math_abs((L2CAgent *)auStack560,(L2CValue *)puVar14);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_STICK);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar16);
  uVar7 = lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
    uVar7 = lib::L2CValue::operator_((L2CValue *)&local_c0,(L2CValue *)auStack560);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,1.0);
      lib::L2CValue::operator_((L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,1.0);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar16);
    uVar7 = lib::L2CValue::operator__((L2CValue *)&local_c0,aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
      fVar16 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::operator_(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_c0);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(aLStack432,(L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  if ((uVar7 & 1) == 0) {
    uVar7 = lib::L2CValue::operator__(aLStack432,aLStack448);
    if ((uVar7 & 1) == 0) {
      FUN_71001ba4f0(this);
    }
  }
  else {
    uVar7 = lib::L2CValue::operator__(aLStack432,aLStack448);
    if ((uVar7 & 1) == 0) {
      FUN_71001b9f40(this);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue(aLStack112,pvVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack208,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    uVar17 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar17);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_c0);
    lib::L2CValue::operator_(pLVar11,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack256,pLVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ACCEL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue(aLStack272,fVar16);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack336,GROUND_TOUCH_FLAG_DOWN);
    uVar5 = lib::L2CValue::as_integer(aLStack336);
    uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar15,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar17);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_c0);
    lib::L2CValue::operator_(pLVar11,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack336);
    fVar16 = (float)app::lua_bind::GroundModule__get_down_friction_impl(*ppBVar15);
    lib::L2CValue::L2CValue(aLStack336,fVar16);
    lib::L2CValue::L2CValue(aLStack368,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack384,0x83c15031f);
    uVar7 = lib::L2CValue::as_integer(aLStack368);
    uVar8 = lib::L2CValue::as_integer(aLStack384);
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack352,fVar16);
    lib::L2CValue::operator_(aLStack336,aLStack352);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack336);
    pLVar10 = (L2CValue *)0x18cdc1683;
    pLVar12 = (L2CAgent *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
    lib::L2CAgent::math_abs(pLVar12,pLVar10);
    lib::L2CValue::operator_(aLStack352,aLStack272);
    lib::L2CValue::L2CValue(aLStack384,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack400,0xcdd48dbee);
    uVar7 = lib::L2CValue::as_integer(aLStack384);
    uVar8 = lib::L2CValue::as_integer(aLStack400);
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack368,fVar16);
    lib::L2CValue::operator_(aLStack336,aLStack368);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    pLVar10 = (L2CValue *)0x18cdc1683;
    pLVar12 = (L2CAgent *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
    lib::L2CAgent::math_abs(pLVar12,pLVar10);
    lib::L2CValue::operator_(aLStack352,aLStack272);
    lib::L2CValue::L2CValue(aLStack384,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack400,0xedb6f1a4d);
    uVar7 = lib::L2CValue::as_integer(aLStack384);
    uVar8 = lib::L2CValue::as_integer(aLStack400);
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack368,fVar16);
    lib::L2CValue::operator_(aLStack336,aLStack368);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
    uVar7 = lib::L2CValue::operator_((L2CValue *)&local_c0,pLVar10);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
      uVar7 = lib::L2CValue::operator_((L2CValue *)&local_c0,aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::operator_(aLStack272,aLStack224);
        lib::L2CValue::operator_(aLStack352,aLStack240);
        lib::L2CValue::operator_(aLStack256,aLStack336);
        lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_c0);
      }
      else {
        lib::L2CValue::operator_(aLStack272,aLStack208);
        lib::L2CValue::operator_(aLStack352,aLStack240);
        lib::L2CValue::operator_(aLStack256,aLStack336);
        lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_c0);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
      uVar7 = lib::L2CValue::operator_((L2CValue *)&local_c0,aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::operator_(aLStack272,aLStack208);
        lib::L2CValue::operator_(aLStack352,aLStack240);
        lib::L2CValue::operator_(aLStack256,aLStack336);
        lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_c0);
      }
      else {
        lib::L2CValue::operator_(aLStack272,aLStack224);
        lib::L2CValue::operator_(aLStack352,aLStack240);
        lib::L2CValue::operator_(aLStack256,aLStack336);
        lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_c0);
      }
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    uVar7 = lib::L2CValue::as_number(aLStack256);
    uVar5 = lib::L2CValue::as_number(aLStack336);
    local_c0 = uVar7 & 0xffffffff | (ulong)uVar5 << 0x20;
    uStack184 = 0;
    pKVar13 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar13,(Vector2f *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack336);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_TURN);
    uVar7 = lib::L2CValue::operator__(pLVar10,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack336,-1.0);
      lib::L2CValue::L2CValue(aLStack352,-1.0);
      uVar7 = lib::L2CValue::as_number(aLStack336);
      uVar5 = lib::L2CValue::as_number(aLStack352);
      local_c0 = uVar7 & 0xffffffff | (ulong)uVar5 << 0x20;
      uStack184 = 0;
      pKVar13 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar13,(Vector2f *)&local_c0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_SPEED_GROUND);
    fVar16 = (float)lib::L2CValue::as_number(aLStack256);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack576,0.0);
    lib::L2CValue::L2CValue(aLStack592,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack576);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar17 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar17);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_c0);
    lib::L2CValue::operator_(pLVar11,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar10 = (L2CValue *)0x18cdc1683;
    pLVar12 = (L2CAgent *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CAgent::math_abs(pLVar12,pLVar10);
    lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack160,0xbf30b4651);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    uVar8 = lib::L2CValue::as_integer(aLStack160);
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar16);
    uVar7 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar15,GVar6);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,GROUND_CORRECT_KIND_GROUND);
      GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar15,GVar6);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack464);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue(aLStack128,fVar16);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,-1.0);
    uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,true);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    }
    lib::L2CValue::L2CValue(aLStack608,aLStack112);
    FUN_71001b5eb0(this,aLStack608);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar3 = lib::L2CValue::as_integer(aLStack432);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack560);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  return;
}

