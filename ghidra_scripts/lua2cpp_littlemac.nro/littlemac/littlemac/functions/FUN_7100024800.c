
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100024800(L2CFighterLittlemac *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  DamageNoReactionMode DVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
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
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  ppBVar11 = &this->moduleAccessor;
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + '`'));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator==(aLStack192,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) goto LAB_7100024934;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100024eb8;
  }
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100024934:
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
LAB_71000249bc:
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        app::lua_bind::KineticModule__clear_speed_all_impl(*ppBVar11);
      }
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) goto LAB_71000249bc;
    app::lua_bind::KineticModule__clear_speed_all_impl(*ppBVar11);
  }
  lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack208,0x1ac9c797cd);
  uVar7 = lib::L2CValue::as_integer(aLStack192);
  uVar9 = lib::L2CValue::as_integer(aLStack208);
  iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar9);
  lib::L2CValue::L2CValue(aLStack128,iVar5);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator+(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator=(aLStack144,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::operator/(aLStack96,aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator*(aLStack128,aLStack192);
  lib::L2CValue::operator=(aLStack160,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator+(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_WORK_ID_FLOAT_SPECIAL_N_CHARGE_RATE);
  fVar12 = (float)lib::L2CValue::as_number(aLStack112);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLAG_CHECK_DASH);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack112);
    lVar2 = -0x70;
LAB_7100024cc4:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,CONTROL_PAD_BUTTON_SPECIAL);
    iVar5 = lib::L2CValue::as_integer(aLStack192);
    bVar3 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar11,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLAG_DASH_RESERVE);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar5);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLAG_CHECK_DASH);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar5);
      lVar2 = -0x50;
      goto LAB_7100024cc4;
    }
  }
  fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::operator-(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  uVar7 = lib::L2CValue::operator<=(aLStack128,aLStack112);
  if ((uVar7 & 1) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
    uVar7 = lib::L2CValue::operator<=(aLStack144,pLVar8);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_N_FLAG_DASH_RESERVE);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar7 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) {
        fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack96,fVar12);
        lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack192,0x1ca15a0708);
        uVar7 = lib::L2CValue::as_integer(aLStack128);
        uVar9 = lib::L2CValue::as_integer(aLStack192);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar9);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        uVar7 = lib::L2CValue::operator<=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_DAMAGE_NO_REACTION_MODE_NORMAL);
          DVar6 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
                    (*ppBVar11,DVar6,-1.0,-1.0,-1);
          lib::L2CValue::~L2CValue(aLStack96);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1a);
          fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
          lib::L2CValue::L2CValue(aLStack112,fVar12);
          lib::L2CValue::operator*(pLVar8,aLStack112);
          lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack208,0xcee0a3848);
          uVar7 = lib::L2CValue::as_integer(aLStack192);
          uVar9 = lib::L2CValue::as_integer(aLStack208);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar9);
          lib::L2CValue::L2CValue(aLStack128,fVar12);
          uVar7 = lib::L2CValue::operator<=(aLStack96,aLStack128);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack320,_FIGHTER_LITTLEMAC_STATUS_KIND_SPECIAL_N_DASH);
            lib::L2CValue::L2CValue(aLStack336,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
            lib::L2CValue::~L2CValue(aLStack336);
            pLVar8 = aLStack320;
          }
          else {
            lib::L2CValue::L2CValue(aLStack288,_FIGHTER_LITTLEMAC_STATUS_KIND_SPECIAL_N_DASH_TURN);
            lib::L2CValue::L2CValue(aLStack304,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
            lib::L2CValue::~L2CValue(aLStack304);
            pLVar8 = aLStack288;
          }
          lib::L2CValue::~L2CValue(pLVar8);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_7100024eb8;
        }
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) goto LAB_71000252dc;
        lib::L2CValue::L2CValue(aLStack96,0xf3a6aace3);
        HVar10 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
                  (*ppBVar11,HVar10,-1.0,1.0,0.0);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack112,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack352,0.0);
        lib::L2CValue::L2CValue(aLStack368,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__unable_energy_impl(*ppBVar11,iVar5);
LAB_7100025498:
        lib::L2CValue::~L2CValue(aLStack96);
      }
      else {
LAB_71000252dc:
        pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
            HVar10 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
                      (*ppBVar11,HVar10,-1.0,1.0,0.0);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            lib::L2CValue::L2CValue(aLStack112,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack192,0.0);
            lib::L2CValue::L2CValue(aLStack208,0.0);
            lib::L2CValue::L2CValue(aLStack352,0.0);
            lib::L2CValue::L2CValue(aLStack368,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
            app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack352);
            lib::L2CValue::~L2CValue(aLStack208);
            lib::L2CValue::~L2CValue(aLStack192);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            iVar5 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::KineticModule__enable_energy_impl(*ppBVar11,iVar5);
            goto LAB_7100025498;
          }
        }
      }
      fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
      lib::L2CValue::L2CValue(aLStack96,fVar12);
      lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack192,0x1666e22b54);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      uVar9 = lib::L2CValue::as_integer(aLStack192);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack112,iVar5);
      uVar7 = lib::L2CValue::operator<=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) {
LAB_7100025938:
          pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          uVar7 = lib::L2CValue::operator==(pLVar8,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
            iVar5 = lib::L2CValue::as_integer(aLStack128);
            bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
            lib::L2CValue::L2CValue(aLStack96,false);
            uVar7 = lib::L2CValue::operator==(aLStack112,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
            if ((uVar7 & 1) != 0) {
              pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
              lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_CMD_CAT1_FLAG_AIR_ESCAPE);
              lib::L2CValue::operator&(pLVar8,aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              if ((bVar4 & 1U) != 0) {
                lib::L2CValue::L2CValue
                          (aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_AIR);
                iVar5 = lib::L2CValue::as_integer(aLStack112);
                bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
                lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
                bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
                lib::L2CValue::~L2CValue(aLStack96);
                lib::L2CValue::~L2CValue(aLStack112);
                if ((bVar4 & 1U) != 0) {
                  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_AIR);
                  lib::L2CValue::L2CValue(aLStack112,true);
                  lua2cpp::L2CFighterBase::change_status
                            (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack96);
                  lib::L2CValue::L2CValue(aLStack192,true);
                  goto LAB_7100025ac0;
                }
              }
            }
          }
          lib::L2CValue::L2CValue(aLStack192,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
          iVar5 = lib::L2CValue::as_integer(aLStack112);
          bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar4 & 1U) == 0) {
LAB_7100025678:
            lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_F);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar4 & 1U) != 0) {
              lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
              bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((bVar4 & 1U) != 0) {
                pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
                lib::L2CValue::operator&(pLVar8,aLStack96);
                lib::L2CValue::~L2CValue(aLStack96);
                bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
                lib::L2CValue::~L2CValue(aLStack112);
                if ((bVar4 & 1U) != 0) {
                  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ESCAPE_F);
                  lib::L2CValue::L2CValue(aLStack112,true);
                  lua2cpp::L2CFighterBase::change_status
                            (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack96);
                  lib::L2CValue::L2CValue(aLStack192,true);
                  goto LAB_7100025ac0;
                }
              }
            }
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE_B);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar4 & 1U) != 0) {
              lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
              bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((bVar4 & 1U) != 0) {
                pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
                lib::L2CValue::operator&(pLVar8,aLStack96);
                lib::L2CValue::~L2CValue(aLStack96);
                bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
                lib::L2CValue::~L2CValue(aLStack112);
                if ((bVar4 & 1U) != 0) {
                  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_B);
                  lib::L2CValue::L2CValue(aLStack112,true);
                  lua2cpp::L2CFighterBase::change_status
                            (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack96);
                  lib::L2CValue::L2CValue(aLStack192,true);
                  goto LAB_7100025ac0;
                }
              }
            }
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_GUARD_ON);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar5);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
            bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar4 & 1U) != 0) {
              lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
              bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((bVar4 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_GUARD_ON);
                lib::L2CValue::L2CValue(aLStack112,true);
                lua2cpp::L2CFighterBase::change_status
                          (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::~L2CValue(aLStack96);
                lib::L2CValue::L2CValue(aLStack192,true);
                goto LAB_7100025ac0;
              }
            }
            goto LAB_7100025938;
          }
          lua2cpp::L2CFighterCommon::sub_check_command_guard(this);
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((bVar4 & 1U) == 0) goto LAB_7100025678;
          pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
          lib::L2CValue::operator&(pLVar8,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar4 & 1U) == 0) goto LAB_7100025678;
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE);
          lib::L2CValue::L2CValue(aLStack112,true);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack192,true);
        }
LAB_7100025ac0:
        bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack192);
        lib::L2CValue::~L2CValue(aLStack192);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_7100024eb8;
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100024eb8;
    }
  }
  else {
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1a);
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  lib::L2CValue::operator*(pLVar8,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack208,0xcee0a3848);
  uVar7 = lib::L2CValue::as_integer(aLStack192);
  uVar9 = lib::L2CValue::as_integer(aLStack208);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar9);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  uVar7 = lib::L2CValue::operator<=(aLStack96,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_LITTLEMAC_STATUS_KIND_SPECIAL_N_MAX_DASH);
    lib::L2CValue::L2CValue(aLStack272,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::~L2CValue(aLStack272);
    pLVar8 = aLStack256;
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_LITTLEMAC_STATUS_KIND_SPECIAL_N_MAX_DASH_TURN);
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::~L2CValue(aLStack240);
    pLVar8 = aLStack224;
  }
  lib::L2CValue::~L2CValue(pLVar8);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_7100024eb8:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

