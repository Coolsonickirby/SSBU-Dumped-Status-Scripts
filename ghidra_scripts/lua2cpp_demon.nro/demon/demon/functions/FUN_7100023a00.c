
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023a00(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  uint uVar6;
  undefined8 uVar7;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong local_a0;
  undefined8 uStack152;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  undefined8 uStack56;
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar5 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    uVar4 = lib::L2CValue::operator<((L2CValue *)&local_40,(L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128);
      uVar7 = app::lua_bind::PostureModule__pos_2d_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,(float)uVar7);
      lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar7 >> 0x20));
      lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_a0);
      lib::L2CValue::operator=(aLStack128,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,-1000.0);
      lib::L2CValue::L2CValue(aLStack224,false);
      uVar4 = lib::L2CValue::as_number(aLStack112);
      uVar6 = lib::L2CValue::as_number(aLStack128);
      local_a0 = uVar4 & 0xffffffff | (ulong)uVar6 << 0x20;
      uStack152 = 0;
      uVar4 = lib::L2CValue::as_number(aLStack192);
      uVar6 = lib::L2CValue::as_number(aLStack208);
      local_40 = uVar4 & 0xffffffff | (ulong)uVar6 << 0x20;
      uStack56 = 0;
      bVar1 = lib::L2CValue::as_bool(aLStack224);
      bVar1 = app::lua_bind::GroundModule__ray_check_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                         (Vector2f *)&local_a0,(Vector2f *)&local_40,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::GroundModule__set_passable_check_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(param_1,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,param_3);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(param_1,true);
  }
  return;
}

