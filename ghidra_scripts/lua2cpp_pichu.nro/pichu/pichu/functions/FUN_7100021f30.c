
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021f30(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CAgent *this;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  Hash40 HVar10;
  L2CValue *pLVar11;
  float fVar12;
  undefined8 uVar13;
  long lVar14;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined auStack336 [16];
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [16];
  undefined auStack208 [16];
  Hash40MapEntry **local_c0;
  ulong uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0.0);
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    pLVar11 = aLStack160;
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x70,SUB81(pLVar11,0));
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
    uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),(float)uVar13);
    pLVar7 = (L2CValue *)(auStack208 + 0x20);
    lib::L2CValue::L2CValue(pLVar7,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::operator=(pLVar5,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::operator=(pLVar6,pLVar7);
    lib::L2CValue::~L2CValue(pLVar7);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack208);
    this = (L2CAgent *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    lib::L2CAgent::math_atan(this,pLVar7,pLVar11);
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.5);
    lib::L2CValue::operator*
              ((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    pLVar7 = aLStack240;
    lib::L2CValue::operator-((L2CValue *)auStack224,pLVar7);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CAgent::math_deg((L2CAgent *)auStack208,pLVar7);
    lib::L2CValue::L2CValue(aLStack272,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack288,0x1c405dcf42);
    uVar8 = lib::L2CValue::as_integer(aLStack272);
    uVar9 = lib::L2CValue::as_integer(aLStack288);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack256,fVar12);
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.01);
    lib::L2CValue::operator+(aLStack256,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack272,fVar12);
    lib::L2CValue::operator*((L2CValue *)auStack224,aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.0);
    pLVar7 = (L2CValue *)(auStack208 + 0x10);
    uVar8 = lib::L2CValue::operator<(aLStack256,pLVar7);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      goto LAB_7100022bac;
    }
    lib::L2CAgent::math_abs((L2CAgent *)auStack224,pLVar7);
    uVar8 = lib::L2CValue::operator<(aLStack240,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack272,0x1ef5c3fe60);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      uVar9 = lib::L2CValue::as_integer(aLStack272);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_1->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack256,fVar12);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack288,0x1ec9cec139);
      pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      uVar8 = lib::L2CValue::as_integer(aLStack288);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_1->moduleAccessor,(ulong)pLVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack272,fVar12);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CAgent::math_abs((L2CAgent *)auStack224,pLVar7);
      lib::L2CAgent::math_rad((L2CAgent *)auStack336,pLVar7);
      lib::L2CAgent::math_sin((L2CAgent *)auStack320,pLVar7);
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),1.0);
      lib::L2CValue::operator-((L2CValue *)(auStack208 + 0x10),(L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack320);
      lib::L2CValue::~L2CValue((L2CValue *)auStack336);
      lib::L2CValue::operator-(aLStack272,aLStack256);
      lib::L2CValue::operator*((L2CValue *)auStack320,aLStack288);
      lib::L2CValue::operator+(aLStack256,(L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::operator=(aLStack288,(L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack320);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack320,
                 _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_ATTACK_SPEED_X);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),fVar12);
      lib::L2CValue::operator*((L2CValue *)(auStack320 + 0x10),aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack320);
      lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack320 + 0x10));
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack208 + 0x10));
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack320);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack320);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
    }
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_DEGREE);
    iVar4 = lib::L2CValue::as_integer(aLStack256);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),fVar12);
    lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue
              (aLStack272,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_TARGET_DEGREE);
    iVar4 = lib::L2CValue::as_integer(aLStack272);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack256,fVar12);
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.0);
    uVar8 = lib::L2CValue::operator==(aLStack256,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    if ((uVar8 & 1) == 0) {
      bVar2 = false;
LAB_71000225a0:
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack320,
                 _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_TARGET_DEGREE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),fVar12);
      uVar3 = lib::L2CValue::operator==((L2CValue *)(auStack208 + 0x10),(L2CValue *)auStack224);
      uVar3 = uVar3 ^ 1;
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack320);
      if (bVar2) goto LAB_71000225f0;
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack320 + 0x10),
                 _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_START_DEGREE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack320 + 0x10));
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack288,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.0);
      uVar8 = lib::L2CValue::operator==(aLStack288,(L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      bVar2 = true;
      uVar3 = 1;
      if ((uVar8 & 1) == 0) goto LAB_71000225a0;
LAB_71000225f0:
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
    }
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack272,0x1a994cfbc9);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      uVar9 = lib::L2CValue::as_integer(aLStack272);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_1->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack256,fVar12);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::operator*((L2CValue *)auStack224,aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),-1.0);
      uVar8 = lib::L2CValue::operator==(aLStack112,(L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::operator-(aLStack272);
        lib::L2CValue::operator=(aLStack272,(L2CValue *)(auStack208 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack208 + 0x10),
                 _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_TARGET_DEGREE);
      fVar12 = (float)lib::L2CValue::as_number(aLStack272);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar12,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack208 + 0x10),
                 _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_START_DEGREE);
      fVar12 = (float)lib::L2CValue::as_number(aLStack96);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar12,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack208 + 0x10),
               _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_TARGET_DEGREE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack256,fVar12);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack208 + 0x10),
               _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_START_DEGREE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack272,fVar12);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.0);
    uVar8 = lib::L2CValue::operator==(aLStack256,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
    if ((uVar8 & 1) == 0) {
LAB_7100022810:
      lib::L2CValue::operator-(aLStack256,aLStack272);
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),3.0);
      lib::L2CValue::operator/((L2CValue *)auStack336,(L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack336);
      uVar8 = lib::L2CValue::operator<(aLStack96,aLStack256);
      if ((uVar8 & 1) == 0) {
        uVar8 = lib::L2CValue::operator<(aLStack256,aLStack96);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.0);
          uVar8 = lib::L2CValue::operator<((L2CValue *)(auStack208 + 0x10),(L2CValue *)auStack320);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::operator+(aLStack96,(L2CValue *)auStack320);
            lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack208 + 0x10));
          }
          else {
            lib::L2CValue::operator-(aLStack96,(L2CValue *)auStack320);
            lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack208 + 0x10));
          }
          lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
          uVar8 = lib::L2CValue::operator<(aLStack96,aLStack256);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::operator=(aLStack96,aLStack256);
          }
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.0);
        uVar8 = lib::L2CValue::operator<((L2CValue *)(auStack208 + 0x10),(L2CValue *)auStack320);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::operator-(aLStack96,(L2CValue *)auStack320);
          lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack208 + 0x10));
        }
        else {
          lib::L2CValue::operator+(aLStack96,(L2CValue *)auStack320);
          lib::L2CValue::operator=(aLStack96,(L2CValue *)(auStack208 + 0x10));
        }
        lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
        uVar8 = lib::L2CValue::operator<(aLStack256,aLStack96);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::operator=(aLStack96,aLStack256);
        }
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack208 + 0x10),
                 _FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_SKULL_BASH_DEGREE);
      fVar12 = (float)lib::L2CValue::as_number(aLStack96);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar12,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack320);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0.0);
      uVar8 = lib::L2CValue::operator==(aLStack272,(L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
      if ((uVar8 & 1) == 0) goto LAB_7100022810;
    }
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue((L2CValue *)auStack208);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
  lib::L2CValue::operator-(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
  lib::L2CValue::operator=(pLVar7,(L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::operator=(pLVar5,(L2CValue *)auStack208);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)auStack224);
  lib::L2CValue::~L2CValue((L2CValue *)auStack224);
  lib::L2CValue::~L2CValue((L2CValue *)auStack208);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0x31d39a761);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)auStack208);
  uVar8 = lib::L2CValue::as_number(pLVar7);
  lVar14 = lib::L2CValue::as_number(pLVar5);
  uVar3 = lib::L2CValue::as_number(pLVar6);
  local_c0 = (Hash40MapEntry **)(uVar8 & 0xffffffff | lVar14 << 0x20);
  uStack184 = (ulong)uVar3;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (param_1->moduleAccessor,HVar10,(Vector3f *)(auStack208 + 0x10),0,0);
LAB_7100022bac:
  lib::L2CValue::~L2CValue((L2CValue *)auStack208);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

