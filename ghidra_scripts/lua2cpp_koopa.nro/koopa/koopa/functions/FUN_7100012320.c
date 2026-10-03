
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012320(void *param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this;
  float fVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(this,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xdf3b40b09);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,-1.0,1.0,0.0,false,
                 false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x92ee4d34c);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,-1.0,1.0,0.0,false,
                 false);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::operator==(param_2,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_FINAL_FLAG_AIR);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack80,0xdf3b40b09);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      fVar6 = (float)lib::L2CValue::as_number(aLStack96);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,fVar6,fVar7,
                 (bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack80,0x92ee4d34c);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      fVar6 = (float)lib::L2CValue::as_number(aLStack96);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,fVar6,fVar7,
                 (bool)(bVar1 & 1),0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

