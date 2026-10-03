
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004b200(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  GroundCollisionLine *pGVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  long lVar15;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  undefined auStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  BattleObjectModuleAccessor *local_a0;
  ulong uStack152;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  void **local_60;
  lua_State *plStack88;
  
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128);
  uVar14 = app::lua_bind::PostureModule__pos_2d_impl
                     (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,(float)uVar14);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar14 >> 0x20));
  lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_a0);
  lib::L2CValue::operator=(aLStack128,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::operator+(aLStack128,param_3);
  lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1f448ffe2c);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  pLVar6 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,(ulong)pLVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar11);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)auStack224,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    uVar14 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                       (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_a0);
    lib::L2CValue::operator=((L2CValue *)(auStack224 + 0x10),aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    pLVar7 = (L2CValue *)(auStack224 + 0x10);
    lib::L2CAgent::math_atan((L2CAgent *)&local_60,pLVar7,pLVar6);
    lib::L2CAgent::math_deg((L2CAgent *)auStack240,pLVar7);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack272,fVar11);
    lib::L2CValue::operator-(aLStack272);
    lib::L2CValue::operator*((L2CValue *)&local_a0,aLStack256);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    ppBVar10 = &local_a0;
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack224,(L2CValue *)ppBVar10);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((uVar5 & 1) == 0) {
      lib::L2CAgent::math_rad((L2CAgent *)auStack224,(L2CValue *)ppBVar10);
      fVar11 = (float)lib::L2CValue::as_number(aLStack176);
      fVar12 = (float)lib::L2CValue::as_number(aLStack192);
      fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack240);
      uVar14 = app::sv_math::vec2_rot(fVar11,fVar12,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,(float)uVar14);
      lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar14 >> 0x20));
      lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_a0);
      lib::L2CValue::operator=(aLStack192,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    }
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  fVar11 = (float)app::lua_bind::PostureModule__lr_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar11);
  lib::L2CValue::operator*(aLStack176,(L2CValue *)auStack240);
  lib::L2CValue::operator+(aLStack112,(L2CValue *)auStack224);
  lib::L2CValue::operator+(aLStack128,aLStack192);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack224 + 0x10));
  lVar15 = lib::L2CValue::as_number(aLStack256);
  uVar3 = lib::L2CValue::as_number(aLStack272);
  local_a0 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar15 << 0x20);
  uStack152 = (ulong)uVar3;
  iVar4 = app::GroundUtility::check_dead_area((Vector3f *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_GROUND_DEAD_AREA_CHECK_RESULT_NONE);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack224);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar11);
    lib::L2CValue::operator*(aLStack176,(L2CValue *)auStack240);
    lib::L2CValue::L2CValue(aLStack256,false);
    uVar5 = lib::L2CValue::as_number(aLStack112);
    uVar3 = lib::L2CValue::as_number(aLStack128);
    local_a0 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | (ulong)uVar3 << 0x20);
    uStack152 = 0;
    uVar5 = lib::L2CValue::as_number((L2CValue *)auStack224);
    uVar3 = lib::L2CValue::as_number(aLStack192);
    local_60 = (void **)(uVar5 & 0xffffffff | (ulong)uVar3 << 0x20);
    plStack88 = (lua_State *)0x0;
    bVar1 = lib::L2CValue::as_bool(aLStack256);
    pvVar8 = (void *)app::lua_bind::GroundModule__ray_check_get_line_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),
                                (Vector2f *)&local_a0,(Vector2f *)&local_60,(bool)(bVar1 & 1));
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack224 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),pvVar8);
    }
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    uVar5 = lib::L2CValue::operator==
                      ((L2CValue *)(auStack224 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar5 & 1) == 0) {
      pGVar9 = (GroundCollisionLine *)lib::L2CValue::as_pointer((L2CValue *)(auStack224 + 0x10));
      bVar1 = app::sv_ground_collision_line::is_floor(pGVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(param_1,false);
      }
      else {
        lib::L2CValue::L2CValue(param_1,true);
      }
    }
    else {
      lib::L2CValue::L2CValue(param_1,true);
    }
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
  }
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

