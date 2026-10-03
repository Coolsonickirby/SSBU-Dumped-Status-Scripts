
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000da80(L2CFighterMiigunner *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  undefined auStack512 [32];
  L2CValue aLStack480 [16];
  undefined auStack464 [16];
  undefined auStack448 [32];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined auStack368 [32];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue((L2CValue *)auStack512,_FIGHTER_STATUS_KIND_SPECIAL_HI);
  uVar6 = lib::L2CValue::operator==(pLVar5,(L2CValue *)auStack512);
  lib::L2CValue::~L2CValue((L2CValue *)auStack512);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue((L2CValue *)auStack512,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_HI3_RUSH);
    uVar6 = lib::L2CValue::operator==(pLVar5,(L2CValue *)auStack512);
    lib::L2CValue::~L2CValue((L2CValue *)auStack512);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack512,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_HI3_RUSH_END);
      uVar6 = lib::L2CValue::operator==(pLVar5,(L2CValue *)auStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      if ((uVar6 & 1) == 0) goto LAB_710001205c;
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_END_FLOAT_SDIR);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,fVar11);
      pLVar5 = (L2CValue *)auStack512;
      lib::L2CValue::operator=((L2CValue *)auStack288,pLVar5);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CAgent::math_deg((L2CAgent *)auStack288,pLVar5);
      lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)auStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      pLVar5 = (L2CValue *)0x8;
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,8);
      lib::L2CValue::operator!(pLVar8);
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack512,90.0);
        uVar6 = lib::L2CValue::operator<((L2CValue *)auStack512,(L2CValue *)auStack256);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack512,90.0);
          pLVar5 = (L2CValue *)auStack512;
          uVar6 = lib::L2CValue::operator<((L2CValue *)auStack256,pLVar5);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)auStack512,10.0);
            lib::L2CValue::operator+((L2CValue *)auStack256,(L2CValue *)auStack512);
            lib::L2CValue::~L2CValue((L2CValue *)auStack512);
            lib::L2CValue::operator=((L2CValue *)auStack256,aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue((L2CValue *)auStack512,90.0);
            pLVar5 = (L2CValue *)auStack256;
            uVar6 = lib::L2CValue::operator<((L2CValue *)auStack512,pLVar5);
            lib::L2CValue::~L2CValue((L2CValue *)auStack512);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)auStack512,90.0);
              pLVar5 = (L2CValue *)auStack512;
              lib::L2CValue::operator=((L2CValue *)auStack256,pLVar5);
              goto LAB_7100011f70;
            }
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)auStack512,10.0);
          lib::L2CValue::operator-((L2CValue *)auStack256,(L2CValue *)auStack512);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          lib::L2CValue::operator=((L2CValue *)auStack256,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue((L2CValue *)auStack512,90.0);
          pLVar5 = (L2CValue *)auStack512;
          uVar6 = lib::L2CValue::operator<((L2CValue *)auStack256,pLVar5);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)auStack512,90.0);
            pLVar5 = (L2CValue *)auStack512;
            lib::L2CValue::operator=((L2CValue *)auStack256,pLVar5);
LAB_7100011f70:
            lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          }
        }
      }
      lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar5);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,0.0);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)auStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack512,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_END_FLOAT_SDIR);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,0.0);
      lib::L2CValue::operator+((L2CValue *)auStack256,(L2CValue *)auStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack512,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_FLOAT_ROT_X);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      pLVar5 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      ppBVar10 = &this->moduleAccessor;
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,fVar11);
      lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),(L2CValue *)auStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,fVar11);
      lib::L2CValue::operator=((L2CValue *)auStack368,(L2CValue *)auStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0x14783375c6);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack512);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack384,fVar11);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0x187bb4bc2c);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack512);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,(ulong)pLVar5)
      ;
      lib::L2CValue::L2CValue(aLStack400,fVar11);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack512,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_FLOAT_SDIR);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack416,fVar11);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack512,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_FLOAT_START_ANGLE)
      ;
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack448 + 0x10),fVar11);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,0.0);
      uVar6 = lib::L2CValue::operator<(aLStack112,(L2CValue *)auStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack512,180.0);
        lib::L2CValue::operator-((L2CValue *)auStack512,(L2CValue *)(auStack448 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::operator=((L2CValue *)(auStack448 + 0x10),aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1a);
      lib::L2CValue::L2CValue((L2CValue *)auStack448,pLVar8);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1b);
      lib::L2CValue::L2CValue((L2CValue *)auStack464,pLVar8);
      pLVar8 = (L2CValue *)auStack448;
      lib::L2CAgent::math_atan((L2CAgent *)auStack464,pLVar8,pLVar5);
      lib::L2CAgent::math_deg((L2CAgent *)auStack512,pLVar8);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::L2CValue(aLStack112,90.0);
      pLVar5 = (L2CValue *)(auStack448 + 0x10);
      lib::L2CValue::operator-(aLStack112,pLVar5);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CAgent::math_rad((L2CAgent *)aLStack144,pLVar5);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack448);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack464);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      uVar14 = app::sv_math::vec2_rot(fVar11,fVar12,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,(float)uVar14);
      pLVar5 = (L2CValue *)(auStack512 + 0x10);
      lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar14 >> 0x20));
      lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)auStack512);
      pLVar8 = pLVar5;
      lib::L2CValue::operator=((L2CValue *)auStack464,pLVar5);
      lib::L2CValue::~L2CValue(pLVar5);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CAgent::math_abs((L2CAgent *)auStack448,pLVar8);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,0.1);
      uVar6 = lib::L2CValue::operator<((L2CValue *)auStack512,aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator-(aLStack384);
        lib::L2CValue::operator*((L2CValue *)auStack512,(L2CValue *)auStack448);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack512,
                   _FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_FLOAT_CHANGE_ANGLE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack128,fVar11);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::operator+(aLStack128,aLStack112);
        uVar6 = lib::L2CValue::operator<(aLStack400,(L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::operator+(aLStack128,aLStack112);
          lib::L2CValue::operator-(aLStack400);
          uVar6 = lib::L2CValue::operator<((L2CValue *)auStack512,aLStack144);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::operator-(aLStack400);
            lib::L2CValue::operator-(aLStack144,aLStack128);
            lib::L2CValue::operator=(aLStack112,(L2CValue *)auStack512);
            lib::L2CValue::~L2CValue((L2CValue *)auStack512);
            pLVar5 = aLStack144;
            goto LAB_71000114a8;
          }
        }
        else {
          lib::L2CValue::operator-(aLStack400,aLStack128);
          lib::L2CValue::operator=(aLStack112,(L2CValue *)auStack512);
          pLVar5 = (L2CValue *)auStack512;
LAB_71000114a8:
          lib::L2CValue::~L2CValue(pLVar5);
        }
        lib::L2CValue::operator+(aLStack128,aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,0.0);
        lib::L2CValue::operator+(aLStack160,(L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack512,
                   _FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_FLOAT_CHANGE_ANGLE);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack512);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,(int)pLVar5);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CAgent::math_rad((L2CAgent *)aLStack112,pLVar5);
        fVar11 = (float)lib::L2CValue::as_number((L2CValue *)(auStack368 + 0x10));
        fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack368);
        fVar13 = (float)lib::L2CValue::as_number(aLStack144);
        uVar14 = app::sv_math::vec2_rot(fVar11,fVar12,fVar13);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,(float)uVar14);
        pLVar5 = (L2CValue *)(auStack512 + 0x10);
        lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar14 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),(L2CValue *)auStack512);
        lib::L2CValue::operator=((L2CValue *)auStack368,pLVar5);
        lib::L2CValue::~L2CValue(pLVar5);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack512);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack368 + 0x10));
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack368);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::operator+(aLStack416,aLStack144);
        lib::L2CValue::operator=(aLStack416,(L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_INT_RUSH_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,iVar4);
      lib::L2CValue::operator=(aLStack320,(L2CValue *)auStack512);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0x14972ea5be);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack128);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,(ulong)pLVar5);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,iVar4);
      uVar6 = lib::L2CValue::operator<((L2CValue *)auStack512,aLStack320);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack512,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack512);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        app::sv_kinetic_energy::set_brake(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_FLOAT_BRAKE);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        fVar11 = (float)lib::L2CValue::as_number(aLStack112);
        fVar12 = (float)lib::L2CValue::as_number(aLStack144);
        fVar13 = (float)lib::L2CValue::as_number(aLStack416);
        uVar14 = app::sv_math::vec2_rot(fVar11,fVar12,fVar13);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,(float)uVar14);
        pLVar8 = (L2CValue *)(auStack512 + 0x10);
        lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar14 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)(auStack288 + 0x10),(L2CValue *)auStack512);
        lib::L2CValue::operator=(aLStack336,pLVar8);
        lib::L2CValue::~L2CValue(pLVar8);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack512);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack288 + 0x10));
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
        app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::operator*((L2CValue *)(auStack368 + 0x10),(L2CValue *)(auStack368 + 0x10));
      lib::L2CValue::operator*((L2CValue *)auStack368,(L2CValue *)auStack368);
      pLVar8 = aLStack160;
      lib::L2CValue::operator+(aLStack144,pLVar8);
      lib::L2CAgent::math_sqrt((L2CAgent *)aLStack128,pLVar8);
      lib::L2CValue::L2CValue((L2CValue *)auStack512,0.0);
      uVar6 = lib::L2CValue::operator<((L2CValue *)auStack512,aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)auStack512);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar6 & 1) != 0) {
        fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,fVar11);
        lib::L2CValue::operator=(aLStack304,(L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::operator*((L2CValue *)(auStack368 + 0x10),aLStack304);
        lib::L2CAgent::math_atan((L2CAgent *)auStack368,aLStack112,pLVar5);
        lib::L2CValue::operator=((L2CValue *)auStack288,(L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,0.0);
        lib::L2CValue::operator+((L2CValue *)auStack288,(L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack512,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_FLOAT_SDIR);
        fVar11 = (float)lib::L2CValue::as_number(aLStack112);
        pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack512);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,(int)pLVar5);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CAgent::math_deg((L2CAgent *)auStack288,pLVar5);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,0.0);
        lib::L2CValue::operator+(aLStack128,(L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack512,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_FLOAT_ROT_X);
        fVar11 = (float)lib::L2CValue::as_number(aLStack112);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack528,0xbed9f1824);
        lib::L2CValue::L2CValue(aLStack544,0xd3aaf0366);
        lib::L2CValue::L2CValue(aLStack560,0xd3dc2c77f);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack128,0x187bb4bc2c);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack512);
        uVar7 = lib::L2CValue::as_integer(aLStack128);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack512,
                   _FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_RUSH_FLOAT_CHANGE_ANGLE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack512);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack128,fVar11);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::operator+(aLStack128,aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,2.0);
        lib::L2CValue::operator*((L2CValue *)auStack512,aLStack112);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::operator/(aLStack160,aLStack176);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack160,fVar11);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,0);
        uVar6 = lib::L2CValue::operator<(aLStack160,(L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack512,1.0);
          lib::L2CValue::operator-((L2CValue *)auStack512,aLStack144);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          lib::L2CValue::operator=(aLStack144,aLStack160);
          lib::L2CValue::~L2CValue(aLStack160);
        }
        HVar9 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack160,HVar9);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,0.5);
        uVar6 = lib::L2CValue::operator<(aLStack144,(L2CValue *)auStack512);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::operator=(aLStack160,aLStack560);
          lib::L2CValue::L2CValue((L2CValue *)auStack512,0.5);
          lib::L2CValue::operator-(aLStack144,(L2CValue *)auStack512);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          lib::L2CValue::L2CValue((L2CValue *)auStack512,2.0);
          lib::L2CValue::operator*(aLStack208,(L2CValue *)auStack512);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          lib::L2CValue::operator=(aLStack176,aLStack192);
        }
        else {
          lib::L2CValue::operator=(aLStack160,aLStack544);
          lib::L2CValue::L2CValue((L2CValue *)auStack512,2.0);
          lib::L2CValue::operator*(aLStack144,(L2CValue *)auStack512);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          lib::L2CValue::L2CValue((L2CValue *)auStack512,1.0);
          lib::L2CValue::operator-((L2CValue *)auStack512,aLStack208);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          lib::L2CValue::operator=(aLStack176,aLStack192);
        }
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        HVar9 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar10);
        lib::L2CValue::L2CValue((L2CValue *)auStack512,HVar9);
        uVar6 = lib::L2CValue::operator==((L2CValue *)auStack512,aLStack160);
        lib::L2CValue::~L2CValue((L2CValue *)auStack512);
        if ((uVar6 & 1) == 0) {
          fVar11 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack192,fVar11);
          fVar11 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack208,fVar11);
          lib::L2CValue::L2CValue(aLStack224,true);
          HVar9 = lib::L2CValue::as_hash(aLStack160);
          fVar11 = (float)lib::L2CValue::as_number(aLStack192);
          fVar12 = (float)lib::L2CValue::as_number(aLStack208);
          bVar3 = lib::L2CValue::as_bool(aLStack224);
          fVar13 = (float)lib::L2CValue::as_number(aLStack176);
          app::lua_bind::MotionModule__add_motion_2nd_impl
                    (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar3 & 1),fVar13);
          lib::L2CValue::L2CValue((L2CValue *)auStack512,1.0);
          lib::L2CValue::operator-((L2CValue *)auStack512,aLStack176);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          fVar11 = (float)lib::L2CValue::as_number((L2CValue *)(auStack256 + 0x10));
          app::lua_bind::MotionModule__set_weight_impl(*ppBVar10,fVar11,true);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)auStack512,1.0);
          lib::L2CValue::operator-((L2CValue *)auStack512,aLStack176);
          lib::L2CValue::~L2CValue((L2CValue *)auStack512);
          fVar11 = (float)lib::L2CValue::as_number(aLStack192);
          app::lua_bind::MotionModule__set_weight_impl(*ppBVar10,fVar11,true);
        }
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack560);
        lib::L2CValue::~L2CValue(aLStack544);
        lib::L2CValue::~L2CValue(aLStack528);
      }
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue((L2CValue *)auStack464);
      lib::L2CValue::~L2CValue((L2CValue *)auStack448);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack448 + 0x10));
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      pLVar5 = aLStack384;
    }
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)auStack512,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,(L2CValue *)auStack512);
    lib::L2CValue::~L2CValue((L2CValue *)auStack512);
    if ((uVar6 & 1) == 0) goto LAB_710001205c;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIGUNNER_STATUS_ARM_ROCKET_INT_STOP_Y_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack512,iVar4);
    lib::L2CValue::operator=(aLStack320,(L2CValue *)auStack512);
    lib::L2CValue::~L2CValue((L2CValue *)auStack512);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)auStack512,0);
    uVar6 = lib::L2CValue::operator<=(aLStack320,(L2CValue *)auStack512);
    lib::L2CValue::~L2CValue((L2CValue *)auStack512);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack512,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack512);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lVar1 = -0x60;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack512,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0xb13247e18);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      lib::L2CValue::operator-(aLStack128);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack512);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lVar1 = -0x80;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    lib::L2CValue::~L2CValue((L2CValue *)auStack512);
    lib::L2CValue::L2CValue((L2CValue *)auStack512,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0xb64234e8e);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack512);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    app::sv_kinetic_energy::set_brake(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar5 = (L2CValue *)auStack512;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_710001205c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack368);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)auStack288);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  return;
}

