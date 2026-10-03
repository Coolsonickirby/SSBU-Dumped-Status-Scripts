
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000c300(long param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  L2CValue *this;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),3);
  uVar3 = lib::L2CValue::as_integer(this);
  uVar3 = app::sv_battle_object::kind(uVar3);
  lib::L2CValue::L2CValue(aLStack80,uVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_POPO);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_flip_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::MotionModule__set_flip_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),true,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,false);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::MotionModule__set_flip_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1),true,false);
    }
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      HVar5 = lib::L2CValue::as_hash(param_2);
      app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,-1.0,1.0,0.0);
      app::lua_bind::PostureModule__update_rot_y_lr_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

