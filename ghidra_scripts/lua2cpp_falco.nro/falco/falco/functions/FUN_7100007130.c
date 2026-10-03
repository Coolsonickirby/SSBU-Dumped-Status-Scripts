
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007130(L2CAgent *param_1)

{
  BattleObject **this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CAgent *pLVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
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
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,false);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,false);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0x14f7620eee);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack128);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_1->moduleAccessor,uVar5,(ulong)pLVar6);
  lib::L2CValue::L2CValue(aLStack400,fVar11);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  fVar11 = (float)app::lua_bind::MotionModule__frame_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack416,fVar11);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::operator+(aLStack416,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::operator=(aLStack368,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack416);
  uVar5 = lib::L2CValue::operator<=(aLStack400,aLStack368);
  if ((uVar5 & 1) == 0) goto LAB_7100007cf4;
  lib::L2CValue::L2CValue(aLStack416,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_FLAG_DECIDE_STICK);
  iVar3 = lib::L2CValue::as_integer(aLStack416);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack128);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack416);
  if ((bVar2 & 1U) != 0) {
    this = &param_1[2].battleObject;
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator+(pLVar7,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_FIRE_DECIDE_STICK_X);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar11,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator+(pLVar7,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_FIRE_DECIDE_STICK_Y);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar11,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar7 = (L2CValue *)0x1a;
    pLVar8 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
    lib::L2CAgent::math_abs(pLVar8,pLVar7);
    lib::L2CValue::L2CValue(aLStack112,0.125);
    pLVar7 = aLStack128;
    uVar5 = lib::L2CValue::operator<(aLStack112,pLVar7);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      uVar4 = app::lua_bind::PostureModule__set_stick_lr_impl(param_1->moduleAccessor,0.0);
      pLVar7 = (L2CValue *)(ulong)(uVar4 & 1);
      lib::L2CValue::L2CValue(aLStack432,SUB41(uVar4 & 1,0));
      lib::L2CValue::~L2CValue(aLStack432);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(param_1->moduleAccessor);
    }
    lib::L2CValue::L2CValue(aLStack128,90.0);
    lib::L2CAgent::math_rad((L2CAgent *)aLStack128,pLVar7);
    lib::L2CValue::operator=((L2CValue *)auStack256,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack112,0.5);
    lib::L2CValue::operator=(aLStack144,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    lib::L2CValue::operator=(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar7,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,true);
      pLVar9 = aLStack112;
      lib::L2CValue::operator=(aLStack336,pLVar9);
      pLVar7 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack480,GROUND_TOUCH_FLAG_DOWN);
      uVar4 = lib::L2CValue::as_integer(aLStack480);
      uVar15 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack464,(float)uVar15);
      lib::L2CValue::L2CValue(aLStack448,(float)((ulong)uVar15 >> 0x20));
      lib::L2CValue::L2CValue(aLStack112,aLStack464);
      lib::L2CValue::L2CValue(aLStack128,aLStack448);
      pLVar6 = aLStack128;
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x90,SUB81(pLVar6,0));
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack480);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack416,0x18cdc1683);
      lib::L2CValue::operator=(aLStack320,pLVar7);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack416,0x1fbdb2615);
      lib::L2CValue::operator=(aLStack192,pLVar7);
      lib::L2CValue::L2CValue(aLStack112,true);
      lib::L2CValue::operator=(aLStack384,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar7 = (L2CValue *)0x1a;
      pLVar8 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
      lib::L2CAgent::math_abs(pLVar8,pLVar7);
      pLVar7 = (L2CValue *)0x1b;
      pLVar8 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
      lib::L2CAgent::math_abs(pLVar8,pLVar7);
      lib::L2CValue::operator+(aLStack128,aLStack480);
      uVar5 = lib::L2CValue::operator<(aLStack112,aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
        fVar11 = (float)lib::L2CValue::as_number(aLStack320);
        fVar12 = (float)lib::L2CValue::as_number(aLStack192);
        fVar13 = (float)lib::L2CValue::as_number(pLVar7);
        fVar14 = (float)lib::L2CValue::as_number(pLVar9);
        fVar11 = (float)app::sv_math::vec2_angle(fVar11,fVar12,fVar13,fVar14);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        pLVar7 = aLStack112;
        lib::L2CValue::operator=(aLStack224,pLVar7);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack128,90.0);
        lib::L2CAgent::math_rad((L2CAgent *)aLStack128,pLVar7);
        uVar5 = lib::L2CValue::operator<=(aLStack112,aLStack224);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,false);
          lib::L2CValue::operator=(aLStack384,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
        }
      }
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator==(aLStack384,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,true);
        pLVar9 = aLStack112;
        lib::L2CValue::operator=(aLStack336,pLVar9);
        pLVar7 = aLStack112;
      }
      else {
        lib::L2CValue::operator-(aLStack320);
        lib::L2CValue::operator*(aLStack480,aLStack176);
        lib::L2CAgent::math_atan((L2CAgent *)aLStack128,aLStack192,pLVar6);
        pLVar9 = aLStack112;
        lib::L2CValue::operator=((L2CValue *)auStack256,pLVar9);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        pLVar7 = aLStack480;
      }
      lib::L2CValue::~L2CValue(pLVar7);
      pLVar7 = aLStack416;
    }
    lib::L2CValue::~L2CValue(pLVar7);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack336);
    if ((bVar2 & 1U) != 0) {
      pLVar7 = (L2CValue *)0x1a;
      pLVar8 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
      lib::L2CAgent::math_abs(pLVar8,pLVar7);
      pLVar7 = (L2CValue *)0x1b;
      pLVar8 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
      lib::L2CAgent::math_abs(pLVar8,pLVar7);
      lib::L2CValue::operator+(aLStack128,aLStack416);
      pLVar9 = aLStack112;
      uVar5 = lib::L2CValue::operator<=(aLStack144,pLVar9);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        pLVar8 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)this,0x1b);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
        lib::L2CValue::operator*(pLVar7,aLStack176);
        lib::L2CAgent::math_atan(pLVar8,aLStack128,pLVar6);
        pLVar9 = aLStack112;
        lib::L2CValue::operator=((L2CValue *)auStack256,pLVar9);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
      }
    }
    lib::L2CAgent::math_deg((L2CAgent *)auStack256,pLVar9);
    lib::L2CValue::L2CValue(aLStack112,360.0);
    lib::L2CValue::operator-(aLStack112,aLStack416);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::operator=(aLStack160,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::L2CValue(aLStack112,360.0);
    uVar5 = lib::L2CValue::operator<(aLStack112,aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,180.0);
      pLVar6 = aLStack160;
      uVar5 = lib::L2CValue::operator<(aLStack112,pLVar6);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CAgent::math_deg((L2CAgent *)auStack256,pLVar6);
        lib::L2CValue::operator-(aLStack128);
        lib::L2CValue::operator=(aLStack160,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        goto LAB_7100007a20;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,360.0);
      lib::L2CValue::operator-(aLStack160,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::operator=(aLStack160,aLStack128);
LAB_7100007a20:
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator+(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_FLOAT_INIT_ROT_DEGREE);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar11,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_FLAG_DECIDE_STICK);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack416,0x1260fbd356);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar10 = lib::L2CValue::as_integer(aLStack416);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_1->moduleAccessor,uVar5,uVar10);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::operator=((L2CValue *)(auStack256 + 0x10),aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::operator-((L2CValue *)(auStack256 + 0x10),aLStack400);
  lib::L2CValue::operator=(aLStack208,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::operator-((L2CValue *)(auStack256 + 0x10),aLStack368);
  lib::L2CValue::operator=(aLStack272,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::operator-(aLStack208,aLStack272);
  lib::L2CValue::operator=(aLStack272,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack416,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_FLOAT_INIT_ROT_DEGREE);
  iVar3 = lib::L2CValue::as_integer(aLStack416);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar11);
  lib::L2CValue::operator/(aLStack128,aLStack208);
  lib::L2CValue::operator=(aLStack304,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::operator*(aLStack304,aLStack272);
  lib::L2CValue::operator=(aLStack288,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator+(aLStack288,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_FLOAT_TO_RUSH_DEGREE);
  fVar11 = (float)lib::L2CValue::as_number(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar11,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack112,_MA_MSC_CMD_SLOPE_SLOPE);
  lib::L2CValue::L2CValue(aLStack128,MA_MSC_CMD_SLOEP_SLOPE_KIND_NONE);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  app::sv_module_access::slope(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100007cf4:
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

