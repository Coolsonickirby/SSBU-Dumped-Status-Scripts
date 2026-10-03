
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002fdd0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  undefined8 uVar13;
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
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar3 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    ppBVar11 = &param_2->moduleAccessor;
    iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar5);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack128);
      goto LAB_710002fee0;
    }
    lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    bVar4 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar6);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    cVar2 = (char)&stack0xfffffffffffffff0;
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack176,_GROUND_TOUCH_FLAG_ALL);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar11,uVar6);
      lib::L2CValue::L2CValue(aLStack160,(float)uVar13);
      lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::L2CValue(aLStack80,aLStack160);
      lib::L2CValue::L2CValue(aLStack96,aLStack144);
      lua2cpp::L2CFighterBase::Vector2__create
                (param_2,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack96,pLVar8);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack176,pLVar8);
      lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar11,iVar5);
      lib::L2CValue::L2CValue(aLStack192,fVar12);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar11,iVar5);
      lib::L2CValue::L2CValue(aLStack208,fVar12);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xc80cb7cb2);
      lib::L2CValue::L2CValue(aLStack240,0x1493ff5785);
      uVar7 = lib::L2CValue::as_integer(aLStack80);
      uVar9 = lib::L2CValue::as_integer(aLStack240);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack224,iVar5);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack240,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_INT_DAMAGE_FLY_BOUND_NUM);
      iVar5 = lib::L2CValue::as_integer(aLStack240);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar5);
      lib::L2CValue::L2CValue(aLStack80,iVar5);
      uVar7 = lib::L2CValue::operator<(aLStack80,aLStack224);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar7 = lib::L2CValue::operator<(aLStack208,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,-0.5);
          uVar7 = lib::L2CValue::operator<(aLStack208,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack240,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
            lib::L2CValue::L2CValue(aLStack272,0x1e29666481);
            lib::L2CValue::L2CValue(aLStack288,0x31ed91fca);
            lib::L2CValue::L2CValue(aLStack304,0.0);
            lib::L2CValue::L2CValue(aLStack320,0.0);
            lib::L2CValue::L2CValue(aLStack336,0.0);
            lib::L2CValue::L2CValue(aLStack352,0.0);
            lib::L2CValue::L2CValue(aLStack368,0.0);
            lib::L2CValue::L2CValue(aLStack384,0.0);
            lib::L2CValue::L2CValue
                      (aLStack432,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLOAT_DIE_SMOKE_SCALE);
            iVar5 = lib::L2CValue::as_integer(aLStack432);
            fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar5);
            lib::L2CValue::L2CValue(aLStack416,fVar12);
            lib::L2CValue::L2CValue(aLStack80,0.0);
            lib::L2CValue::operator+(aLStack416,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CAgent::clear_lua_stack(param_2);
            lib::L2CAgent::push_lua_stack(param_2,aLStack240);
            lib::L2CAgent::push_lua_stack(param_2,aLStack272);
            lib::L2CAgent::push_lua_stack(param_2,aLStack288);
            lib::L2CAgent::push_lua_stack(param_2,aLStack304);
            lib::L2CAgent::push_lua_stack(param_2,aLStack320);
            lib::L2CAgent::push_lua_stack(param_2,aLStack336);
            lib::L2CAgent::push_lua_stack(param_2,aLStack352);
            lib::L2CAgent::push_lua_stack(param_2,aLStack368);
            lib::L2CAgent::push_lua_stack(param_2,aLStack384);
            lib::L2CAgent::push_lua_stack(param_2,aLStack400);
            lib::L2CAgent::push_lua_stack(param_2,aLStack80);
            app::sv_module_access::effect(param_2->luaStateAgent);
            lib::L2CAgent::pop_lua_stack(param_2,1);
            lib::L2CValue::~L2CValue(aLStack256);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack400);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue(aLStack432);
            lib::L2CValue::~L2CValue(aLStack384);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack352);
            lib::L2CValue::~L2CValue(aLStack336);
            lib::L2CValue::~L2CValue(aLStack320);
            lib::L2CValue::~L2CValue(aLStack304);
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::L2CValue(aLStack80,0x171bb94491);
            HVar10 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::SoundModule__stop_se_impl(*ppBVar11,HVar10,0);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,0x171bb94491);
            HVar10 = lib::L2CValue::as_hash(aLStack80);
            iVar5 = app::lua_bind::SoundModule__play_se_impl
                              (*ppBVar11,HVar10,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack448,iVar5);
            lib::L2CValue::~L2CValue(aLStack448);
            lib::L2CValue::~L2CValue(aLStack80);
          }
          lib::L2CValue::L2CValue
                    (aLStack272,_WEAPON_DUCKHUNT_GUNMAN_STATUS_COMMON_WORK_FLAG_BOUNDED);
          iVar5 = lib::L2CValue::as_integer(aLStack272);
          bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar5);
          lib::L2CValue::L2CValue(aLStack240,(bool)(bVar4 & 1));
          lib::L2CValue::operator!(aLStack240);
          bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack272);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_CAMERA_QUAKE_KIND_S);
            iVar5 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::CameraModule__req_quake_impl(*ppBVar11,iVar5);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack80,_WEAPON_DUCKHUNT_GUNMAN_STATUS_COMMON_WORK_FLAG_BOUNDED);
            iVar5 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar5);
            lib::L2CValue::~L2CValue(aLStack80);
          }
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_NORMAL);
          lib::L2CValue::L2CValue(aLStack288,0xc80cb7cb2);
          lib::L2CValue::L2CValue(aLStack304,0x20ce431b73);
          uVar7 = lib::L2CValue::as_integer(aLStack288);
          uVar9 = lib::L2CValue::as_integer(aLStack304);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar9);
          lib::L2CValue::L2CValue(aLStack272,fVar12);
          lib::L2CValue::operator*(aLStack192,aLStack272);
          lib::L2CValue::operator-(aLStack208);
          lib::L2CValue::L2CValue(aLStack368,0xc80cb7cb2);
          lib::L2CValue::L2CValue(aLStack384,0x20f32332c3);
          uVar7 = lib::L2CValue::as_integer(aLStack368);
          uVar9 = lib::L2CValue::as_integer(aLStack384);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar9);
          lib::L2CValue::L2CValue(aLStack352,fVar12);
          lib::L2CValue::operator*(aLStack336,aLStack352);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack80);
          lib::L2CAgent::push_lua_stack(param_2,aLStack240);
          lib::L2CAgent::push_lua_stack(param_2,aLStack320);
          app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    (aLStack80,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_INT_DAMAGE_FLY_BOUND_NUM);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar5);
          lib::L2CValue::~L2CValue(aLStack80);
        }
      }
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_LEFT);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    bVar4 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar6);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack176,GROUND_TOUCH_FLAG_RIGHT);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      bVar4 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar6);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack176);
        goto LAB_71000306f0;
      }
      lib::L2CValue::L2CValue(aLStack208,_GROUND_TOUCH_FLAG_UP);
      uVar6 = lib::L2CValue::as_integer(aLStack208);
      bVar4 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar6);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar3 & 1U) == 0) goto LAB_7100030a8c;
    }
    else {
LAB_71000306f0:
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack176,_GROUND_TOUCH_FLAG_ALL);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar11,uVar6);
    lib::L2CValue::L2CValue(aLStack480,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack464,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::L2CValue(aLStack80,aLStack480);
    lib::L2CValue::L2CValue(aLStack96,aLStack464);
    lua2cpp::L2CFighterBase::Vector2__create
              (param_2,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar11,iVar5);
    lib::L2CValue::L2CValue(aLStack80,fVar12);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar11,iVar5);
    lib::L2CValue::L2CValue(aLStack96,fVar12);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack496,aLStack80);
    lib::L2CValue::L2CValue(aLStack512,aLStack96);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::L2CValue(aLStack528,aLStack176);
    lua2cpp::L2CFighterBase::Vector2__length(param_2,(L2CValue)0xf0);
    lib::L2CValue::~L2CValue(aLStack528);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator*(pLVar8,aLStack192);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator=(pLVar8,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator*(pLVar8,aLStack192);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar8,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_KINETIC_TYPE_NORMAL);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack272,0xc80cb7cb2);
    lib::L2CValue::L2CValue(aLStack288,0x1f9380c4ff);
    uVar7 = lib::L2CValue::as_integer(aLStack272);
    uVar9 = lib::L2CValue::as_integer(aLStack288);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack240,fVar12);
    lib::L2CValue::operator*(pLVar8,aLStack240);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack336,0xc80cb7cb2);
    lib::L2CValue::L2CValue(aLStack352,0x1f9380c4ff);
    uVar7 = lib::L2CValue::as_integer(aLStack336);
    uVar9 = lib::L2CValue::as_integer(aLStack352);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    lib::L2CValue::operator*(pLVar8,aLStack320);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack208);
    lib::L2CAgent::push_lua_stack(param_2,aLStack224);
    lib::L2CAgent::push_lua_stack(param_2,aLStack304);
    app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lVar1 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar5);
LAB_710002fee0:
    lVar1 = -0x40;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_7100030a8c:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

