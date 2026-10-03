
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000193c0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
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
  undefined auStack176 [32];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  BattleObjectModuleAccessor *local_50;
  ulong uStack72;
  
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_KOOPA_BREATH_INSTANCE_WORK_ID_INT_HIT_FRAME);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar4);
    lVar1 = -0x40;
    goto LAB_7100019b4c;
  }
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_KOOPA_BREATH_INSTANCE_WORK_ID_INT_HIT_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack256,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar5 = lib::L2CValue::operator<=(aLStack256,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  if ((uVar5 & 1) != 0) {
    app::lua_bind::AttackModule__clear_all_impl(param_2->moduleAccessor);
  }
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack256,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar5 = lib::L2CValue::operator<=(aLStack256,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_GROUND_TOUCH_FLAG_ALL);
    uVar11 = lib::L2CValue::as_integer(aLStack256);
    bVar3 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack256);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x18b78d41a0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_50);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      pLVar6 = aLStack304;
      goto LAB_7100019674;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_50);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    pLVar6 = aLStack288;
LAB_7100019674:
    lib::L2CValue::~L2CValue(pLVar6);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue(aLStack256,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar4 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar8);
  lib::L2CValue::operator=((L2CValue *)auStack176,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar4 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar8);
  lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.001);
  uVar5 = lib::L2CValue::operator<((L2CValue *)auStack176,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
LAB_710001977c:
    lib::L2CAgent::math_atan((L2CAgent *)auStack176,(L2CValue *)(auStack176 + 0x10),param_3);
    lib::L2CValue::operator=((L2CValue *)auStack144,(L2CValue *)&local_50);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-0.001);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_50,(L2CValue *)auStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) goto LAB_710001977c;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator=((L2CValue *)auStack144,(L2CValue *)&local_50);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack256,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
  ppBVar7 = &local_50;
  uVar5 = lib::L2CValue::operator==(aLStack256,(L2CValue *)ppBVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack256);
  if ((uVar5 & 1) == 0) {
    lib::L2CAgent::math_deg((L2CAgent *)auStack144,(L2CValue *)ppBVar7);
    lib::L2CValue::operator-(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,90.0);
    lib::L2CValue::operator+(aLStack272,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator=(aLStack240,aLStack256);
  }
  else {
    lib::L2CAgent::math_deg((L2CAgent *)auStack144,(L2CValue *)ppBVar7);
    lib::L2CValue::operator-(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,90.0);
    lib::L2CValue::operator-(aLStack272,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator=(aLStack240,aLStack256);
  }
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator+(aLStack240,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  uVar9 = lib::L2CValue::as_number(aLStack256);
  uVar10 = lib::L2CValue::as_number(aLStack272);
  uVar11 = lib::L2CValue::as_number(aLStack320);
  local_50 = (BattleObjectModuleAccessor *)CONCAT44(uVar10,uVar9);
  uStack72 = (ulong)uVar11;
  app::lua_bind::PostureModule__set_rot_impl(param_2->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_KOOPA_BREATH_INSTANCE_WORK_ID_FLOAT_SPEED_MUL);
  iVar4 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar8);
  lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::operator=(aLStack208,aLStack112);
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_KOOPA_BREATH_INSTANCE_WORK_ID_FLOAT_SIZE_RATE);
  iVar4 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar8);
  lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack256);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0xe);
  lib::L2CValue::operator*(pLVar6,aLStack208);
  lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.2);
  lib::L2CValue::operator=((L2CValue *)(auStack144 + 0x10),(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator-(aLStack96,(L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::operator*(aLStack336,aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.1);
  lib::L2CValue::operator*(aLStack320,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator+((L2CValue *)(auStack144 + 0x10),aLStack272);
  lib::L2CValue::operator=(aLStack224,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack336);
  uVar5 = lib::L2CValue::operator<(aLStack96,aLStack224);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::operator=(aLStack224,aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator+(aLStack224,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  fVar8 = (float)lib::L2CValue::as_number(aLStack256);
  app::lua_bind::PostureModule__set_scale_impl(param_2->moduleAccessor,fVar8,false);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack144);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::~L2CValue(aLStack112);
  lVar1 = -0x50;
LAB_7100019b4c:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

