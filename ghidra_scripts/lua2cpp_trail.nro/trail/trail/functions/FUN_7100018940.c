
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018940(long param_1)

{
  int iVar1;
  L2CValue *this;
  Fighter *pFVar2;
  Hash40 HVar3;
  ulong uVar4;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),4);
  pFVar2 = (Fighter *)lib::L2CValue::as_pointer(this);
  HVar3 = app::FighterSpecializer_Trail::item_hold_motion_kind(pFVar2);
  lib::L2CValue::L2CValue(aLStack64,HVar3);
  lib::L2CValue::L2CValue(aLStack48,0xef638717f);
  uVar4 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_MOTION_PART_SET_KIND_HAVE_ITEM);
    lib::L2CValue::L2CValue(aLStack64,0xef638717f);
    iVar1 = lib::L2CValue::as_integer(aLStack48);
    HVar3 = lib::L2CValue::as_hash(aLStack64);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,HVar3,0.0,1.0,false,false,0.0,
               true,true,false);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

