
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100081860(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *this;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),10);
  iVar2 = lib::L2CValue::as_integer(this);
  bVar1 = app::FighterSpecializer_Pickel::is_status_kind_attack(iVar2);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack48,false);
  uVar3 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    FUN_71000838d0(param_1);
    lib::L2CValue::L2CValue(aLStack48,1.0);
    fVar5 = (float)lib::L2CValue::as_number(aLStack48);
    app::lua_bind::MotionModule__set_weight_change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5);
    lib::L2CValue::~L2CValue(aLStack48);
    FUN_7100083750(aLStack48,param_1);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    HVar4 = lib::L2CValue::as_hash(aLStack48);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,HVar4,0.0,1.0,false,false,0.0,
               true,true,false);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::MotionModule__set_part_animcmd_fix_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

