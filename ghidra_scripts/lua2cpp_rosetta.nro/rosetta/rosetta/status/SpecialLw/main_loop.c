
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRosetta::status::SpecialLw_main_loop(L2CFighterRosetta *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
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
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_7100009480(aLStack80,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::operator_(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack384,false);
      lib::L2CValue::L2CValue(aLStack400,0xab6928cf2);
      lib::L2CValue::L2CValue(aLStack416,0xe46c0e666);
      lib::L2CValue::L2CValue(aLStack432,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_KINETIC_TYPE_ROSETTA_SPECIAL_AIR_LW);
      lib::L2CValue::L2CValue(aLStack464,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      FUN_7100008680(this,aLStack384,aLStack400,aLStack416,aLStack432,aLStack448,aLStack464);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROSETTA_STATUS_SPECIAL_LW_FLAG_ENABLE_SEARCH);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack480,(bool)(bVar2 & 1));
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,0);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::SearchModule__is_search_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      uVar4 = lib::L2CValue::operator__(aLStack480,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack496,aLStack480);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack496);
        if ((bVar1 & 1U) == 0) {
          app::lua_bind::SearchModule__clear_all_impl(this->moduleAccessor);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack112,0x149ceb4ee5);
          uVar4 = lib::L2CValue::as_integer(aLStack96);
          uVar5 = lib::L2CValue::as_integer(aLStack112);
          fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack80,fVar6);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack128,0x6590acad0);
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          uVar5 = lib::L2CValue::as_integer(aLStack128);
          fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack96,fVar6);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,_MA_MSC_CMD_SEARCH_SEARCH);
          lib::L2CValue::L2CValue(aLStack144,0);
          lib::L2CValue::L2CValue(aLStack160,0);
          lib::L2CValue::L2CValue(aLStack176,0x31ed91fca);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,_COLLISION_KIND_MASK_ATTACK);
          lib::L2CValue::L2CValue
                    (aLStack240,
                     _COLLISION_CATEGORY_MASK_ITEM | _COLLISION_CATEGORY_MASK_FIGHTER |
                     _COLLISION_CATEGORY_MASK_ITEM_E | _COLLISION_CATEGORY_MASK_GIMMICK);
          lib::L2CValue::L2CValue(aLStack256,_COLLISION_SITUATION_MASK_GA);
          lib::L2CValue::L2CValue(aLStack272,0);
          lib::L2CValue::L2CValue(aLStack288,_COLLISION_PART_MASK_ALL);
          lib::L2CValue::L2CValue(aLStack304,_HIT_STATUS_MASK_ALL);
          lib::L2CValue::L2CValue(aLStack320,false);
          lib::L2CValue::L2CValue(aLStack336,1);
          lib::L2CValue::L2CValue(aLStack352,false);
          lib::L2CValue::L2CValue(aLStack368,_COLLISION_SHAPE_TYPE_SPHERE);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
          app::sv_module_access::search(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack144,_MA_MSC_CMD_SEARCH_SET_OPPONENT);
          lib::L2CValue::L2CValue(aLStack160,0);
          lib::L2CValue::L2CValue(aLStack176,0);
          lib::L2CValue::L2CValue(aLStack192,_COLLISION_TARGET_PROPERTY);
          lib::L2CValue::L2CValue(aLStack208,_COLLISION_PROPERTY_MASK_REFLECT);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
          app::sv_module_access::search(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ROSETTA_AREA_KIND_SPECIAL_LW_ITEM_SEARCH);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::AreaModule__reset_area_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ROSETTA_AREA_KIND_SPECIAL_LW_ITEM_PICKUP);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::AreaModule__reset_area_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ROSETTA_AREA_KIND_SPECIAL_LW_ITEM_PICKUP);
          lib::L2CValue::L2CValue(aLStack160,true);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::AreaModule__enable_area_impl
                    (this->moduleAccessor,iVar3,(bool)(bVar2 & 1),-1);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROSETTA_AREA_KIND_SPECIAL_LW_ITEM_SEARCH);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar2 = lib::L2CValue::as_bool(aLStack496);
        app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar3,(bool)(bVar2 & 1),-1)
        ;
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack496);
      }
      lib::L2CValue::_L2CValue(aLStack480);
    }
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

