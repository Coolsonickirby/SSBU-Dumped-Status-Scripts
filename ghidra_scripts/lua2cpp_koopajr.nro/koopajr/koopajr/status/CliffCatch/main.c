
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::CliffCatch_main(L2CFighterKoopajr *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0xe4c29c7fd);
  lib::L2CValue::L2CValue(aLStack144,true);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CLIFF_CATCH);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::L2CValue(aLStack112,false);
    HVar4 = lib::L2CValue::as_hash(aLStack128);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar5 = lib::L2CValue::operator__
                      (aLStack144,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_DAMAGE_REACTION_FRAME)
    ;
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_710000df30;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CLIFF_CATCH)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_710000df30:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lua2cpp::L2CFighterCommon::status_CliffCatch(this);
  return;
}

