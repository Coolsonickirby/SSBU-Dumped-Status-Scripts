
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000030b0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  L2CValue *this;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CAgent *this_00;
  Hash40 HVar8;
  L2CValue *pLVar9;
  float fVar10;
  undefined8 uVar11;
  long lVar12;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [16];
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined local_b0 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  pLVar9 = aLStack144;
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x80,SUB81(pLVar9,0));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  uVar11 = app::sv_kinetic_energy::get_speed(param_1->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)local_b0,(float)uVar11);
  pLVar6 = (L2CValue *)(local_b0 + 0x10);
  lib::L2CValue::L2CValue(pLVar6,(float)((ulong)uVar11 >> 0x20));
  lib::L2CValue::operator=(pLVar5,(L2CValue *)local_b0);
  lib::L2CValue::operator=(this,pLVar6);
  lib::L2CValue::~L2CValue(pLVar6);
  lib::L2CValue::~L2CValue((L2CValue *)local_b0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,fVar10);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),1e-05);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_b0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  if ((bVar2 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator*(pLVar6,pLVar5);
    lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar5);
    uVar7 = lib::L2CValue::operator<((L2CValue *)(auStack240 + 0x10),(L2CValue *)local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    if ((uVar7 & 1) == 0) {
      iVar4 = lib::L2CValue::as_integer(param_2);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)local_b0,fVar10);
      lib::L2CValue::operator=(aLStack192,(L2CValue *)local_b0);
      pLVar6 = (L2CValue *)local_b0;
      goto LAB_71000037e8;
    }
    this_00 = (L2CAgent *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator*(pLVar6,aLStack208);
    pLVar6 = (L2CValue *)auStack256;
    lib::L2CAgent::math_atan(this_00,pLVar6,pLVar9);
    lib::L2CAgent::math_deg((L2CAgent *)auStack240,pLVar6);
    lib::L2CValue::operator=(aLStack192,(L2CValue *)local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,0.0);
    lib::L2CValue::operator+(aLStack192,(L2CValue *)local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)local_b0);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack240);
    iVar4 = lib::L2CValue::as_integer(param_2);
    app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar10,iVar4);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator*(pLVar6,aLStack208);
    pLVar6 = aLStack272;
    lib::L2CAgent::math_atan((L2CAgent *)auStack256,pLVar6,pLVar9);
    lib::L2CAgent::math_deg((L2CAgent *)local_b0,pLVar6);
    lib::L2CValue::~L2CValue((L2CValue *)local_b0);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    iVar4 = lib::L2CValue::as_integer(param_2);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,fVar10);
    lib::L2CValue::operator=(aLStack192,(L2CValue *)local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)local_b0);
    iVar4 = lib::L2CValue::as_integer(param_3);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar10);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,0.0);
    uVar7 = lib::L2CValue::operator==((L2CValue *)auStack256,(L2CValue *)local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)local_b0);
    if ((uVar7 & 1) == 0) {
      bVar2 = false;
LAB_71000034e8:
      iVar4 = lib::L2CValue::as_integer(param_3);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)local_b0,fVar10);
      uVar7 = lib::L2CValue::operator==((L2CValue *)local_b0,(L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)local_b0);
      if (bVar2) {
        lib::L2CValue::~L2CValue(aLStack272);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      if ((uVar7 & 1) == 0) goto LAB_7100003534;
    }
    else {
      iVar4 = lib::L2CValue::as_integer(param_4);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack272,fVar10);
      lib::L2CValue::L2CValue((L2CValue *)local_b0,0.0);
      uVar7 = lib::L2CValue::operator==(aLStack272,(L2CValue *)local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)local_b0);
      if ((uVar7 & 1) == 0) {
        bVar2 = true;
        goto LAB_71000034e8;
      }
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
LAB_7100003534:
      lib::L2CValue::L2CValue((L2CValue *)local_b0,0.0);
      lib::L2CValue::operator+((L2CValue *)auStack240,(L2CValue *)local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)local_b0);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
      iVar4 = lib::L2CValue::as_integer(param_3);
      app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar10,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::L2CValue((L2CValue *)local_b0,0.0);
      lib::L2CValue::operator+(aLStack192,(L2CValue *)local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)local_b0);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
      iVar4 = lib::L2CValue::as_integer(param_4);
      app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar10,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    }
    iVar4 = lib::L2CValue::as_integer(param_3);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar10);
    iVar4 = lib::L2CValue::as_integer(param_4);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack288,fVar10);
    lib::L2CValue::operator-((L2CValue *)auStack256,aLStack288);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,5.0);
    lib::L2CValue::operator/(aLStack320,(L2CValue *)local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)local_b0);
    lib::L2CValue::~L2CValue(aLStack320);
    uVar7 = lib::L2CValue::operator<(aLStack192,(L2CValue *)auStack256);
    if ((uVar7 & 1) == 0) {
      uVar7 = lib::L2CValue::operator<((L2CValue *)auStack256,aLStack192);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_b0,0.0);
        uVar7 = lib::L2CValue::operator<((L2CValue *)local_b0,aLStack304);
        lib::L2CValue::~L2CValue((L2CValue *)local_b0);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::operator+(aLStack192,aLStack304);
          lib::L2CValue::operator=(aLStack192,(L2CValue *)local_b0);
        }
        else {
          lib::L2CValue::operator-(aLStack192,aLStack304);
          lib::L2CValue::operator=(aLStack192,(L2CValue *)local_b0);
        }
        lib::L2CValue::~L2CValue((L2CValue *)local_b0);
        uVar7 = lib::L2CValue::operator<(aLStack192,(L2CValue *)auStack256);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::operator=(aLStack192,(L2CValue *)auStack256);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_b0,0.0);
      uVar7 = lib::L2CValue::operator<((L2CValue *)local_b0,aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)local_b0);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::operator-(aLStack192,aLStack304);
        lib::L2CValue::operator=(aLStack192,(L2CValue *)local_b0);
      }
      else {
        lib::L2CValue::operator+(aLStack192,aLStack304);
        lib::L2CValue::operator=(aLStack192,(L2CValue *)local_b0);
      }
      lib::L2CValue::~L2CValue((L2CValue *)local_b0);
      uVar7 = lib::L2CValue::operator<((L2CValue *)auStack256,aLStack192);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::operator=(aLStack192,(L2CValue *)auStack256);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)local_b0,0.0);
    lib::L2CValue::operator+(aLStack192,(L2CValue *)local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)local_b0);
    fVar10 = (float)lib::L2CValue::as_number(aLStack320);
    iVar4 = lib::L2CValue::as_integer(param_2);
    app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar10,iVar4);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  }
  pLVar6 = (L2CValue *)auStack240;
LAB_71000037e8:
  lib::L2CValue::~L2CValue(pLVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0x31d39a761);
  lib::L2CValue::operator-(aLStack192);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  HVar8 = lib::L2CValue::as_hash((L2CValue *)auStack240);
  uVar7 = lib::L2CValue::as_number((L2CValue *)auStack256);
  lVar12 = lib::L2CValue::as_number(aLStack288);
  uVar3 = lib::L2CValue::as_number(aLStack304);
  local_b0._0_8_ = (void **)(uVar7 & 0xffffffff | lVar12 << 0x20);
  local_b0._8_8_ = (lua_State *)(ulong)uVar3;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (param_1->moduleAccessor,HVar8,(Vector3f *)local_b0,0,0);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

