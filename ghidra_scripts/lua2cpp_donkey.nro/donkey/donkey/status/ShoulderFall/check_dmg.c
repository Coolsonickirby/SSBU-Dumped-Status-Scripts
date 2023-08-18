
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::ShoulderPass_check_dmg(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *in_x1;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack144,in_x1);
  lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x10d723eebb);
    lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,uVar4);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0xdc56470f9);
      fVar8 = (float)lib::L2CValue::as_number(pLVar6);
      fVar8 = (float)app::DamageTransactorImpl::calc_reaction_frame(fVar8);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,0xd8ddb421d);
      lib::L2CValue::L2CValue(aLStack128,0xd14025cb6);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack64,fVar8);
      uVar5 = lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0xd8ddb421d);
        lib::L2CValue::L2CValue(aLStack128,0xd8d0b0d0c);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        uVar7 = lib::L2CValue::as_integer(aLStack128);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack64,fVar8);
        uVar5 = lib::L2CValue::operator_(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0xd8ddb421d);
          lib::L2CValue::L2CValue(aLStack128,0xdfa0c3d9a);
          uVar5 = lib::L2CValue::as_integer(aLStack112);
          uVar7 = lib::L2CValue::as_integer(aLStack128);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack64,fVar8);
          uVar5 = lib::L2CValue::operator_(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_FLY);
            lib::L2CValue::operator_(aLStack96,aLStack64);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_3);
            lib::L2CValue::operator_(aLStack96,aLStack64);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_2);
          lib::L2CValue::operator_(aLStack96,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_1);
        lib::L2CValue::operator_(aLStack96,aLStack64);
      }
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_FLY);
      uVar5 = lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((bVar2 & 1U) != 0) {
          app::lua_bind::ItemModule__drop_item_impl(this->moduleAccessor,90.0,0.0,0);
        }
        lib::L2CValue::L2CValue((L2CValue *)return_value,false);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)return_value,true);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,false);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

