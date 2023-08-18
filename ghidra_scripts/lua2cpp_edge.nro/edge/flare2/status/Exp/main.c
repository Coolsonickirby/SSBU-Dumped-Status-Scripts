
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlare2::status::Exp_main(L2CWeaponEdgeFlare2 *this,L2CValue *return_value)

{
  byte bVar1;
  uchar uVar2;
  HitStatus HVar3;
  int iVar4;
  int iVar5;
  LinkAttribute LVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x306be521b);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar7 = lib::L2CValue::as_hash(aLStack80);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_XLU);
  HVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar3,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack128,_LINK_ATTRIBUTE_REFERENCE_PARENT_LR);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  LVar6 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::LinkModule__chk_attribute_impl(this->moduleAccessor,iVar4,LVar6);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack96,_ATTACK_LR_CHECK_B);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::AttackModule__set_lr_check_impl(this->moduleAccessor,iVar4,uVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,Exp_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

